#!/bin/sh
set -e
if test "$CONFIGURATION" = "Debug"; then :
  cd /Users/matty/projects/boba/bulkin
  /opt/homebrew/bin/cmake -E make_directory /Users/matty/projects/bulkin/shaders
fi
if test "$CONFIGURATION" = "Release"; then :
  cd /Users/matty/projects/boba/bulkin
  /opt/homebrew/bin/cmake -E make_directory /Users/matty/projects/bulkin/shaders
fi
if test "$CONFIGURATION" = "MinSizeRel"; then :
  cd /Users/matty/projects/boba/bulkin
  /opt/homebrew/bin/cmake -E make_directory /Users/matty/projects/bulkin/shaders
fi
if test "$CONFIGURATION" = "RelWithDebInfo"; then :
  cd /Users/matty/projects/boba/bulkin
  /opt/homebrew/bin/cmake -E make_directory /Users/matty/projects/bulkin/shaders
fi

