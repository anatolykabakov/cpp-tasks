/*
Task 1: Write the program, which writes to console numbers from 0 to 10.
*/
#include <iostream>

int main() {
    const int N = 10;
    for (int i=0; i<=N; i++) {
        std::cout << i << std::endl;
    }
    return EXIT_SUCCESS;
}
