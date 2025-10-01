#!/bin/sh
set -e
if test "$CONFIGURATION" = "Debug"; then :
  cd /Users/matty/projects/bulkin/shaders
  -target spirv -profile spirv_1_4 -emit-spirv-directly -fvk-use-entrypoint-name -entry vertMain -entry fragMain -o slang.spv
fi
if test "$CONFIGURATION" = "Release"; then :
  cd /Users/matty/projects/bulkin/shaders
  -target spirv -profile spirv_1_4 -emit-spirv-directly -fvk-use-entrypoint-name -entry vertMain -entry fragMain -o slang.spv
fi
if test "$CONFIGURATION" = "MinSizeRel"; then :
  cd /Users/matty/projects/bulkin/shaders
  -target spirv -profile spirv_1_4 -emit-spirv-directly -fvk-use-entrypoint-name -entry vertMain -entry fragMain -o slang.spv
fi
if test "$CONFIGURATION" = "RelWithDebInfo"; then :
  cd /Users/matty/projects/bulkin/shaders
  -target spirv -profile spirv_1_4 -emit-spirv-directly -fvk-use-entrypoint-name -entry vertMain -entry fragMain -o slang.spv
fi

