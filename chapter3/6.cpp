/*
Task 6. Write the program, in which squared matrix is created.
Matrix must be filled with random numeric values. 
Needed calculate the sum of diagonal elements of matrix.
*/
#include <iostream>
#include <array>
#include <cmath>
#include <ctime>

static unsigned int seed = static_cast<unsigned int>(std::time(nullptr));
constexpr unsigned int a = 1324;
constexpr unsigned int b = 4342;
constexpr unsigned int mask = 31313;

unsigned int pseudo_random_number_generator() {
    seed = (a * seed + b) % mask;
    return seed;
}

void print_array(std::array<std::array<unsigned int, 3>, 3> &arr2d) {
    for (int i=0; i<arr2d.size(); i++) {
        for (int j=0; j<arr2d[i].size(); j++) {
            std::cout << arr2d[i][j] << " ";
        }
        std::cout << std::endl;
    } 
    std::cout << "---------------------" << std::endl;
}


int main()
{
    std::array<std::array<unsigned int, 3>, 3> arr2d;

    for (int i=0; i<arr2d.size(); i++) {
        for (int j=0; j<arr2d[i].size(); j++) {
            arr2d[i][j] = pseudo_random_number_generator();
        }
    }
    print_array(arr2d);
    int sum_of_diagonal_elements = 0;
    // calculate the sum of the elements of the main and second diagonals
    for (int i=0; i<arr2d.size(); i++) {
        for (int j=0; j<arr2d[i].size(); j++) {
            const bool main_diagonal = i == j;
            if (main_diagonal) {
                sum_of_diagonal_elements += arr2d[i][j];
                continue;
            }
            const bool second_diagonal = i == (arr2d.size() - j - 1);
            if (second_diagonal) {
                sum_of_diagonal_elements += arr2d[i][j];
            }
        }
    }
    std::cout << "The sum of the elements of the main and second diagonal is " << sum_of_diagonal_elements;
    return EXIT_SUCCESS;
}