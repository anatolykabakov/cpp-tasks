/*
Task 12: Write the program, which calculates the sum of natural numbers.
*/
#include <iostream>
#include <climits>
#include <stdexcept>
#include <string> 

bool check_sum_overflow(const unsigned long long sum, const unsigned int b) {
    return sum > ULLONG_MAX - b;
}

int main() {
    std::cout << "Enter number from 0 to " << UINT_MAX << std::endl;
    unsigned int number=0;
    unsigned long long sum=0;
    std::cin >> number;
    for (unsigned int i=0; i <= number; i++) {
        if (check_sum_overflow(sum, i)) {
            throw std::overflow_error("Sum more than " + std::to_string(ULLONG_MAX)); 
        }
        sum += i;
    }
    std::cout << "The sum of numbers from 0 to " << number << " is " <<  sum;
    return EXIT_SUCCESS;
}
