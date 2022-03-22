NAME=$1
BUILD_DIR="./build"
grep -q $1 "build/cmake_install.cmake" || (rm -rf $BUILD_DIR && mkdir $BUILD_DIR)
cmake $NAME -B $BUILD_DIR
cmake --build $BUILD_DIR
echo "-----------------------------------------------------------------------------------------------------------------------------"
./build/$NAME.exe
