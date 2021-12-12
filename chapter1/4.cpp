/*
Task 4: Write the program, which writes to console fibonachi numbers.
*/
#include <iostream>
#include <stdexcept>

long long fibonachi_number(const long long number) {
    if (number < 0) {
        throw std::runtime_error("Fibonachi number can not be less than zero!");
    }
    if (number == 0) {
        return 0;
    }
    if (number == 1) {
        return 1;
    }
    return fibonachi_number(number - 2) + fibonachi_number(number- 1);
}

int main() {
    int n = 0;
    std::cout << "Enter index fibonachi number" << std::endl;
    std::cin>>n;
    int k = 0;
    while (k<n) {
        int number = fibonachi_number(k);
        std::cout << number << " ";
        k++; 
    }
    return EXIT_SUCCESS;
}
