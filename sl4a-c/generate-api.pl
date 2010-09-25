#!/usr/bin/perl

# This program reads in a text file with lines of the form
#   methodName i=sis
# which means that the SL4A API has a method called methodName, which
# returns an int and takes 3 arguments, a string, int and string.
#
# It uses this spec to generate simple wrapper functions for languages
# which might want to call those methods, so that those languages
# can do compile-time type checking on argument type and number.

# -----------------------------------------------------------------------
# Generate the C language wrapper for the SL4A API

%c_types = (
  'o' => 'json_t*',
  'a' => 'json_t*',
  'b' => 'int',
  'r' => 'double',
  'i' => 'int',
  's' => 'char*',
  'v' => 'void',
);

sub generate_c_proto {
  my($method, $return_type, $args) = @_;

  my(@args) = split(//, $args);

  my $arg_declaration;

  if ($args eq "v") {
    $arg_declaration = "int fd";
  } else {
    my $variable_name = 'a';
    $arg_declaration = "int fd, " . 
      join(", ", map { "$c_types{$_} " . $variable_name++ } @args);
  }

  return "$c_types{$return_type} sl4a_$method($arg_declaration)";
}

sub generate_c_declaration {
  return generate_c_proto(@_) . ";\n\n";
}

sub generate_c_api_wrapper {
  my($method, $return_type, $args) = @_;

  my $proto = generate_c_proto(@_);

  my $return_variable;
  my $return_statement;
  if ($return_type ne 'v') {
    $return_variable = "$c_types{$return_type} ret;";
    $return_statement = "return ret;";
  } else {
    $return_variable = "int ret; // unused";
    $return_statement = "return;";
  }

  my(@args) = split(//, $args);
  my $variable_name = 'a';
  my $variables = ", " . join(", ", map { $variable_name++ } @args);

  $variables = "" if $args eq "v";

  return <<EOF;
$proto {
  // automatically generated API wrapper for SL4A
  $return_variable
  sl4a_rpc_method(fd, "$method", '$return_type', (void*) &ret,
                  "$args"$variables);
  $return_statement
}

EOF
}

open(my $c_header, ">", "sl4a-wrapper.h") 
  or die("opening header file for write");
open(my $c_implementation, ">", "sl4a-wrapper.c") 
  or die("opening .c file for write");

print $c_implementation <<EOF;
// automatically generated API wrapper for SL4A

#include "sl4a-wrapper.h"

EOF

print $c_header <<EOF;
#ifndef SL4A_WRAPPER_H
#define SL4A_WRAPPER_H

// automatically generated API wrapper for SL4A

#include "sl4a-rpc.h"
#include <jansson.h>

// ----------
EOF

# -----------------------------------------------------------------------
# Generate a wrapper for Python
#

open(my $python_wrapper, ">", "sl4a-wrappers/sl4a-wrapper.py") 
  or die("opening .py file for write");

print $python_wrapper <<EOF;
#!/usr/bin/python
#
# This is just a first stab at generating an SL4A wrapper for
# python automatically from generate-api.pl.
#
# Automatically generated API wrapper for SL4A.
#
# This wrapper lets the interpreter check that method names
# and the number of arguments are correct at "compile" time,
# and checks the type of inputs at runtime before any actual
# API call is made.

import android
droid = android.Android()

# This function takes a list like
# "int_a","int", "str_b","str"
# and checks that each argument has the appropriate type.
#
# It raises an appropriate exception if the type
# check fails.
# 
# It could be much better implemented than this.
def check(args):
  i = 0
  while i < len(args):
    arg = args[i]
    type = args[i+1]

    if type == 'int':
      try:
        dummy = int(arg)
      except:
        raise

    elif type == 'str':
      try:
        dummy = str(arg)
      except:
        raise

    elif type == 'real':
      try:
        dummy = arg + 0.1;
      except:
        raise

    i += 2


# Here are the automatically generated API wrappers:

EOF

%python_types = (
  'o' => 'dict',
  'a' => 'list',
  'b' => 'bool',
  'r' => 'real',
  'i' => 'int',
  's' => 'str',
  'v' => 'void',
);

sub generate_python_api_wrapper {
  my($method, $return_type, $args) = @_;

  if ($args eq 'v') {
    $args = '';
  }

  my(@args) = split(//, $args);

  my $argname = 'a';

  # Make a hash of argument name to type.  Eg.,
  # 'iis' turns into:
  #
  #("int_a" => "int",
  # "int_b" => "int",
  # "str_c" => "str" )
  #
  my %python_arg_types = map { 
    ( $python_types{$_} . '_' . $argname++, $python_types{$_} )
  } @args;

  #print join(', ', %python_arg_types);
  #print("\n\n");

  $argname = 'a';

  # Sigh, and because perl doesn't have ordered maps, keep track of
  # the argument order:
  my @python_args = map { 
    $python_types{$_} . '_' . $argname++
  } @args;

  my $proto;
  $proto = "$method(" . join(", ", @python_args) . ")";

  my $checks = '';

  if ($args ne '') {
    $checks .= "  check(";

    $checks .= join(", ", map {
      "$_,'$python_arg_types{$_}'";
    } @python_args);

    $checks .= ")\n";
  }

  my $wrapper = <<EOF;
def $proto:
$checks  return droid.$proto

EOF

  return $wrapper;
}


# -----------------------------------------------------------------------
# Parse the list of API methods and types

$lines = 0;
while(<>) {
  $lines++;
  next if /\s*#/;

  my($method, $signature) = split(/\s+/, $_);
  my($return_type, $args) = split(/=/, $signature);

  unless ($method and $signature and $return_type and $args) {
    print "skipping invalid line #$lines: $_\n";
    next;
  }

  print $c_header generate_c_declaration($method, $return_type, $args);
  print $c_implementation generate_c_api_wrapper($method, $return_type, $args);

  print $python_wrapper generate_python_api_wrapper($method, $return_type, $args);
}


print $c_header <<EOF;
#endif
EOF
