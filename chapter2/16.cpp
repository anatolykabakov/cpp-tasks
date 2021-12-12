/*
Task 16. Write a program (use a switch statement),
in the program, the user enters a number in the range [0..10]
tested is the Fibonacci number.
*/
#include <iostream>

int main() {
    std::cout << "Enter number in range [0..10]" << std::endl;
    int number =0;
    std::cin >> number;
    
    switch (number) {
        case 1: std::cout << 1<< std::endl;
        break;
        case 2: std::cout << 2 << std::endl;
        break;
        case 3: std::cout << 3 << std::endl;
        break;
        case 5: std::cout << 5 << std::endl;
        break;
        case 8: std::cout << 8 << std::endl;
        break;
        default: std::cout << 0 << std::endl;
    }
    
    if (number == 1) {
        std::cout << 1 << std::endl;
    }
    if (number == 2) {
        std::cout << 2 << std::endl;
    }
    if (number == 3) {
        std::cout << 3 << std::endl;
    }
    if (number == 5) {
        std::cout << 5 << std::endl;
    }
    if (number == 8) {
        std::cout << 8 << std::endl;
    }

    return EXIT_SUCCESS;
}