/*
Write the program: user enters the natural number, the program writes numbers, which are divisible.
*/
#include <iostream>
#include <stdexcept>
#include <climits>

bool is_divisible(unsigned int number, unsigned int value) {
    return number % value == 0;
}

int main()
{
    std::cout << "Enter number from 0 to " << UINT_MAX << std::endl;
    unsigned int number=0;
    std::cin >> number;
    for (unsigned int i = 0; i < UINT_MAX; i++) {
        if (i >= UINT_MAX) {
            throw std::overflow_error("Number more than UINT_MAX");
        }
        bool is_number_divisible = (i % number == 0);
        if (is_divisible(i, number)) {
            std::cout << i << std::endl;
        }
    }
    return EXIT_SUCCESS;
}