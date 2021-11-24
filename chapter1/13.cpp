/*
Task 13: Write the program, which calculates the sum of odd natural numbers.
*/
#include <iostream>
#include <limits>

bool is_number_odd(const unsigned int number) {
    return number % 2 != 0;
}

bool is_number_greater_zero(const int number) {
    return number > 0;
}

int main() {
    
    std::cout << "Enter 10 natural numbers(more than zero 1 2 3 4 ..)" << std::endl;
    unsigned int sum = 0;
    for (int i=0; i<10; i++) {
        int number = 0;
        std::istream& stream = std::cin.operator >> (number);
        bool is_number_integer = !stream.fail();
        if (!is_number_integer) {
            std::cout << "non-integer value" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        if (!is_number_greater_zero(number)) {
            std::cout << "value less than zero" << std::endl;
            continue;
        }
        if (is_number_odd(number))
            sum+=number;
            
    }
    std::cout << sum;
    return EXIT_SUCCESS;
}