/*
Task 13. Write the program that find the first 100 parameters a b c 
of the equation a^2 + b^2 = c^2.
*/

#include <iostream>
#include <cmath>
#include <chrono>

int main()
{
    auto tic = std::chrono::high_resolution_clock::now();
    constexpr int N = 100;
    for (int a=1; a <= N; a++) {
        for (int b=1; b <= N; b++) {
            for (int c=1; c <= N; c++) {
                bool pythagorean_triple = pow(a,2) + pow(b,2) == pow(c,2);
                if (pythagorean_triple) {
                    std::cout << a << " " << b << " " << c << std::endl;
                }
            }
        }
    }
    auto toc = std::chrono::high_resolution_clock::now();

    auto ms_int = std::chrono::duration_cast<std::chrono::milliseconds>(toc - tic);
    std::cout << ms_int.count() << "ms\n";
    return EXIT_SUCCESS;
}
