/*
Write the program, which calculates the greatest common divisor of two numbers.
*/
#include <iostream>

int main()
{
    unsigned int number1=0;
    unsigned int number2=0;
    std::cout << "Enter two numbers" << std::endl;
    std::cin >> number1;
    std::cin >> number2;
    while (number1 && number2) {
        if (number1 > number2) {
            number1 %= number2;
        } else {
            number2 %= number1;
        }
    }
    std::cout << "Greatest common divisor is " << number1 + number2;
    return EXIT_SUCCESS;
}