/*
Task 12. Write the program for solving equation Ax + b, 
A and B are integers, solution x must be integer number, else no solution.
*/

#include <iostream>
#include <stdexcept>
#include <cmath>
#include <type_traits>


int main()
{
    int A = 1;
    int B = 2;
    double result = 0;
    if (A == 0 && (B != 0 || B == 0)) {
        throw std::runtime_error("No solution!");
    }
    result = B / A;
    std::cout << "Solution is " << result << std::endl;
    return EXIT_SUCCESS;
}
