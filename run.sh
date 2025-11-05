rm -rf build
mkdir build
cd build
cmake .. -DCMAKE_EXPORT_COMPILE_COMMANDS=1 $1 -GNinja
ninja
cp -r ../resources ../textures .
./boba
