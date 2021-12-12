/*
Task 14. Write the program for solving quadratic equation Ax^2 + Bx + C = 0.
*/

#include <iostream>
#include <cmath>
#include <stdexcept>
#include <chrono>

int main()
{
    auto tic = std::chrono::high_resolution_clock::now();
    
    constexpr int A = 1;
    constexpr int B = -4;
    constexpr int C = -5;
    
    const int D = pow(B, 2) - 4 * A * C;
    if (D < 0) {
        throw std::runtime_error("D < 0. Root no find!");
    }
    const int x1 = (-B + sqrt(D)) / (2 * A);
    const int x2 = (-B - sqrt(D)) / (2 * A);
    
    std::cout << x1 << " " << x2 << std::endl;
    
    auto toc = std::chrono::high_resolution_clock::now();

    auto ms_int = std::chrono::duration_cast<std::chrono::milliseconds>(toc - tic);
    std::cout << ms_int.count() << "ms\n";
    return EXIT_SUCCESS;
}
