/*
Task 12. Write the program, for multiply of rectangular matrix.
Number of rows and columns is different. Matrix A (m x n) and B (n x l) are multiplied.
The result is matrix C (m x l).
*/
#include <iostream>
#include <array>

template<std::size_t m, std::size_t l>
void print_array(const std::array<std::array<unsigned int, m>, l> &arr2d) {
    for (int i=0; i<arr2d.size(); i++) {
        for (int j=0; j<arr2d[i].size(); j++) {
            std::cout << arr2d[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

template<std::size_t m, std::size_t n, std::size_t l>
void multiply(
    const std::array<std::array<unsigned int, n>, m> &A,
    const std::array<std::array<unsigned int, l>, n> &B,
    std::array<std::array<unsigned int, m>, l> &C) {
    
    for (auto i = 0; i < m; i++) {
        for (auto j = 0; j < l; j++) {
            unsigned int sum = 0;
            for (auto k = 0; k < n; k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }
}

int main()
{
    constexpr unsigned int m = 2;
    constexpr unsigned int n = 3;
    constexpr unsigned int l = 2;
    std::array<std::array<unsigned int, n>, m> A = {{ 
        {1, 2, 3},
        {4, 5, 6}
    }};
    std::array<std::array<unsigned int, l>, n> B = {{
        {7, 8},
        {9, 1},
        {2, 3}
    }};
    std::array<std::array<unsigned int, l>, m> C = {0};
    multiply(A, B, C);
    print_array(C);
    return EXIT_SUCCESS;
}