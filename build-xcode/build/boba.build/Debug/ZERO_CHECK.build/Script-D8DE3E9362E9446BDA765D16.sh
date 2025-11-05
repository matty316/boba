#!/bin/sh
set -e
if test "$CONFIGURATION" = "Debug"; then :
  cd /Users/matty/projects/boba/build-xcode
  make -f /Users/matty/projects/boba/build-xcode/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "Release"; then :
  cd /Users/matty/projects/boba/build-xcode
  make -f /Users/matty/projects/boba/build-xcode/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "MinSizeRel"; then :
  cd /Users/matty/projects/boba/build-xcode
  make -f /Users/matty/projects/boba/build-xcode/CMakeScripts/ReRunCMake.make
fi
if test "$CONFIGURATION" = "RelWithDebInfo"; then :
  cd /Users/matty/projects/boba/build-xcode
  make -f /Users/matty/projects/boba/build-xcode/CMakeScripts/ReRunCMake.make
fi

