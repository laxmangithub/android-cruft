#!/usr/bin/perl

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
}


print $c_header <<EOF;
#endif
EOF
