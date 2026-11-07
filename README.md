# Enhancer for scanned images

This repository contains an application/library for enhancing the text quality of scanned images.
This is a university project during the winter term 2026/2027 at FSU Jena for the course "Algorithm Engineering".

# Build with CMake

Configure and build the project from the repository root (in Release configuration):
```bash
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build
```

Run the application:
```bash
./build/ImageEnhancer
```

# Format the code

This software uses [clang-format](https://clang.llvm.org/docs/ClangFormat.html) for automatically formatting the cpp code.
Use the following command from the root directory:

```bash
clang-format -i include/**/*.hpp src/**/*.cpp
```