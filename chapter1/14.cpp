/*
Task 14: Write the program, that creates an array and fill in even natural numbers.
*/
#include <iostream>
#include <limits>

constexpr int ARRAY_SIZE = 5;

bool is_number_even(const int number) {
    return !(number % 2);
}

bool is_number_greater_zero(const int number) {
    return number > 0;
}

void print_array(const unsigned short *array, const int size) {
    for (int i=0; i < size; i++) {
        std::cout << array[i] << " ";
    }
}

int main() {
    std::cout << "Enter 5 natural numbers(more than zero 1 2 3 4 ..)" << std::endl;
    unsigned short arr[ARRAY_SIZE] = {0};
    for (int i=0; i < ARRAY_SIZE; i++) {
        int number = 0;
        std::istream& stream = std::cin.operator >> (number);
        bool is_number_integer = !stream.fail();
        if (!is_number_integer) {
            std::cout << "non-integer value" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        if (!is_number_greater_zero(number) || !is_number_even(number)) {
            i--;
            std::cout << "Please enter even unsigned int value." << std::endl;
            continue;
        }
        arr[i] = number;
    }
    print_array(arr, ARRAY_SIZE);
    return EXIT_SUCCESS;
}