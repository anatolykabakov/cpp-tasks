/*
Write the program, which calculates the natural log value.
*/
#include <iostream>
#include <cmath>

double natural_log(const double arg, const int number_iterations=100) {
    double value = 0;
    double q = arg;
    double index = 1;
    do {
        value += q;
        index++;
        q = (pow(-1, index + 1) * pow(arg, index)) / index;
    } while (index <= number_iterations);
    return value;
}

int main()
{
    double arg = 0;
    std::cout << "Enter argument" << std::endl;
    std::cin >> arg;
    int number_iterations = 0;
    std::cout << "Enter number iterations" << std::endl;
    std::cin >> number_iterations;
    std::cout << "Natural log value is " << natural_log(arg, number_iterations) << std::endl;
    std::cout << "Control value is " << std::log(1 + arg) << std::endl;
    return EXIT_SUCCESS;
}