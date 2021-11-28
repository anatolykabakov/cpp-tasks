/*
Task 12: Write the program, which calculates the sum of natural numbers.
*/
#include <iostream>
#include <climits>
#include <stdexcept>


bool check_overflow(const unsigned a, const unsigned b) {
    return a > UINT_MAX - b;
}

int main() {
    std::cout << "Enter number from 0 to " << UINT_MAX << std::endl;
    unsigned int number=0;
    unsigned int sum=0;
    std::cin >> number;
    std::cout << number;
    for (unsigned int i=0; i <= number; i++) {
        if (check_overflow(sum, i)) {
            throw std::overflow_error("Sum more than 4294967295."); 
        }
        sum += i;
    }
    std::cout << "The sum of numbers from 0 to " << number << " is " <<  sum;
    return EXIT_SUCCESS;
}