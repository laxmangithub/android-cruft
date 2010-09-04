THE TARBALLS IN THIS DIRECTORY HAVE MOVED
  See the downloads page instead:
  http://code.google.com/p/android-cruft/downloads/list

vim-7.3-android-binary.tar.gz:
  The vim binary and the runtime/ directory.  Unpack this in /data on your
  rooted phone and export VIMRUNTIME=/data/vim/runtime, then run /data/vim/vim.

bashrc:
vimrc:
  vim seems to get confused about "~" as the home directory.  To get a .vimrc
  to work right, I did the following:
   - Create /data/home (It probably would also have worked to leave it /sdcard)
   - adb push vimrc /data/home/.vimrc
   - Create /data/home/tmp
   - Set up /etc/bash/bashrc.  Here are the relevant changes:

  export HOME=/data/home
  export VIMRUNTIME=/data/vim/runtime
  export PATH=$PATH:/data/vim

  alias vim='vim -u /data/home/.vimrc -i /data/home/.viminfo'
  alias vi='vim'

vim-built-for-android.tar.gz:
  I started with a copy of vim checked out of mercurial on 21 August 2010 and
  hacked on it until I got it to compile using the agcc.pl script in ../ndk.
  Then I tarred up the whole thing and put it here.
