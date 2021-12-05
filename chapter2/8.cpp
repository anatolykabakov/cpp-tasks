/*
Write the program, which calculates the cos value.
*/
#include <iostream>
#include <cmath>


long double factorial(const int number)
{
    if(number < 0) {
        return 0;
    }
    if (number == 0) {
        return 1;
    }
    return number * factorial(number - 1); 
}

double sinh_x(const double arg, const int number_iterations=100, const double accuracy=0.0000001) {
    double value = 0;
    double q = arg;
    double index = 0;
    do {
        value += q;
        index++;
        q = pow(arg, 2 * index + 1) / factorial(2 * index + 1);
        
    } while (index <= number_iterations && fabs(q) >= accuracy);
    return value;
}

int main()
{
    double arg = 0;
    std::cout << "Enter argument" << std::endl;
    std::cin >> arg;
    std::cout << "Sin value is " << sinh_x(arg) << std::endl;
    std::cout << "Control value is " << std::sinh(arg) << std::endl;
    return EXIT_SUCCESS;
}