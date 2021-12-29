/*
Task 1: Write the program, which writes to console numbers from 0 to 10.
*/
#include <iostream>

int main() {
    const int n = 10;
    for (int i=0; i<=n; i++) {
        std::cout << i << std::endl;
    }
    return EXIT_SUCCESS;
}
