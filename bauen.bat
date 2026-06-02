rem cmake -S . -B build
rem cmake --build build --config Debug
cmake -S . -B build -G "MinGW Makefiles"
cmake --build build
cd build
ctest -C Debug -V
cd ..
