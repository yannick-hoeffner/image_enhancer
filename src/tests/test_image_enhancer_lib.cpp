#include <iostream>

#include "lib/image_enhancer_lib.hpp"

int main() {
    // assert that test_parallel returns 0
    if (test_parallel() != 0) {
        std::cerr << "test_parallel failed!" << std::endl;
        return 1;
    }
    return 0;
}