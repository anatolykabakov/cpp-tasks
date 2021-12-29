/*
Task 4: Write the program, which writes to console fibonacci numbers.
*/
#include <iostream>
#include <stdexcept>

long long fibonacci_number(const long long number) {
    if (number < 0) {
        throw std::runtime_error("fibonacci number can not be less than zero!");
    }
    if (number == 0) {
        return 0;
    }
    if (number == 1) {
        return 1;
    }
    return fibonacci_number(number - 2) + fibonacci_number(number- 1);
}

int main() {
    int n = 0;
    std::cout << "Enter index fibonacci number" << std::endl;
    std::cin>>n;
    int k = 0;
    while (k<n) {
        int number = fibonacci_number(k);
        std::cout << number << " ";
        k++; 
    }
    return EXIT_SUCCESS;
}
