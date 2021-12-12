/*
Task 19: Write the program, that creates an array and fill. Elements with even indices
get the value of index. Elements with odd indices get the value of square of indicies. 
*/
#include <iostream>
#include <limits>
#include <cmath> 
constexpr int ARRAY_SIZE = 5;

bool is_number_odd(const unsigned int number) {
    return number % 2;
}

void print_array(const unsigned short *array, const int size) {
    for (int i=0; i < size; i++) {
        std::cout << array[i] << " ";
    }
}

int main() {
    unsigned short arr[ARRAY_SIZE] = {0};
    for (int i=0; i<ARRAY_SIZE; i++) {
        if (is_number_odd(i)) {
            arr[i] = pow(i, 2);
        } else {
            arr[i] = i;
        }
    }
    print_array(arr, ARRAY_SIZE);
    return EXIT_SUCCESS;
}