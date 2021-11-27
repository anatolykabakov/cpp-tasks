/*
Task 19: Write the program, that creates an array and fill. Elements with even indices
get the value of index. Elements with odd indices get the value of square of indicies. 
*/
#include <iostream>
#include <limits>
#include <cmath> 

bool is_number_odd(const unsigned int number) {
    return number % 2;
}

int main() {
    unsigned short arr[6] = {0,0,0,0,0,0};
    for (int i=0; i<6; i++) {
        if (is_number_odd(i)) {
            arr[i] = pow(i, 2);
        } else {
            arr[i] = i;
        }
    }
    for (int i=0; i<6; i++) {
        std::cout << arr[i] << " ";
    }
    return EXIT_SUCCESS;
}