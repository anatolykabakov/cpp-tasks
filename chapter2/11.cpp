/*
Task 11. Write the program for solving equation Ax + b, using nested condition statements.
*/

#include <iostream>
#include <stdexcept>

int main()
{
    double A = 0;
    double B = 0;
    std::cout << "Enter A coefficient." << std::endl;
    std::cin >> A;
    std::cout << "Enter B coefficient." << std::endl;
    std::cin >> B;
    double result = 0;
    if (A == 0 && (B != 0 || B == 0)) {
        throw std::runtime_error("No solution!");
    }
    result = B / A;
    std::cout << "Solution is " << result << std::endl;
    return EXIT_SUCCESS;
}
