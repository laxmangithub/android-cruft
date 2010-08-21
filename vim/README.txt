vim-7.3-android-binary.tar.gz:
  The vim binary and the runtime/ directory.  Unpack this in /data on your
  rooted phone and export VIMRUNTIME=/data/vim/runtime, then run /data/vim/vim.

vim-built-for-android.tar.gz:
  I started with a copy of vim checked out of mercurial on 21 August 2010 and
  hacked on it until I got it to compile using the agcc.pl script in ../ndk.
  Then I tarred up the whole thing and put it here.
