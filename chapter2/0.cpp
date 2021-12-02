/*
Write the program, which calculates the exponent value.
*/
#include <iostream>
#include <cmath>

int main()
{
    int exponent_arg = 0;
    std::cout << "Enter exponent argument" << std::endl;
    std::cin >> exponent_arg;
    int number_iterations = 0;
    std::cout << "Enter number iterations" << std::endl;
    std::cin >> number_iterations;
    double exponent_value = 0;
    double q = 1;
    double index = 0;
    do {
        exponent_value += q;
        index++;
        q *= exponent_arg / index;
    } while (index <= number_iterations);
    std::cout << "Exponent value is " << exponent_value << std::endl;
    std::cout << "Control exponent value is " << exp(exponent_arg) << std::endl;
    return EXIT_SUCCESS;
}