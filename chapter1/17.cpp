/*
Task 17: Write the program, that creates an array and fill in power of 2.
*/
#include <iostream>
#include <limits>
#include <cmath> 

bool is_number_odd(unsigned int number) {
    return number % 2;
}

bool is_number_greater_zero(int number) {
    return number > 0;
}

int main() {
    
    std::cout << "Enter 5 natural numbers(more than zero 1 2 3 4 ..)" << std::endl;
    unsigned short arr[5] = {0,0,0,0,0};
    for (int i=0; i<5; i++) {
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
            std::cout << "value less than one" << std::endl;
            continue;
        }
        arr[i] = pow(2, number);
        
            
    }
    for (int i=0; i<5; i++)
        if (arr[i]>0)
          std::cout << arr[i] << " ";
    return 0;
}