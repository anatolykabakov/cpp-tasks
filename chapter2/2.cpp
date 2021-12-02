/*
Write the program for calculating the sum of odd natural numbers, with use do-while the operator.
*/
#include <iostream>
#include <cmath>
#include <stdexcept>
#include <climits>
#include <string>

template <typename T>
bool is_sum_overflow(const unsigned long long sum, const unsigned int number, const T limit) {
    return sum > limit - number;
}


template <typename T>
bool is_number_even(const T number) {
    return !(number % 2);
}

int main()
{
    std::cout << "Enter number from 0 to " << UINT_MAX << std::endl;
    unsigned int number=0;
    std::cin >> number;
    unsigned long long sum_natural_numbers = 0;
    unsigned int i = 0;
    do {
        if (is_sum_overflow(sum_natural_numbers, i, UINT_MAX)) {
            throw std::overflow_error("Sum more than " + std::to_string(UINT_MAX));
        }
        if (is_number_even(i)) {
            sum_natural_numbers += i;
        }
        i++;
    } while(i <= number);
    std::cout << "Sum natural numbers " << sum_natural_numbers;
    return EXIT_SUCCESS;
}