/*
Task 11. Write the program, in which squared matrix is created.
Needed set the value of the diagonal elements of matrix 1.
*/
#include <iostream>
#include <array>

void print_array(const std::array<std::array<unsigned int, 3>, 3> &arr2d) {
    for (int i=0; i<arr2d.size(); i++) {
        for (int j=0; j<arr2d[i].size(); j++) {
            std::cout << arr2d[i][j] << " ";
        }
        std::cout << std::endl;
    } 
}


int main()
{
    std::array<std::array<unsigned int, 3>, 3> arr2d = {0};

    for (int i=0; i<arr2d.size(); i++) {
        for (int j=0; j<arr2d[i].size(); j++) {
            const bool main_diagonal = i == j;
            if (main_diagonal) {
                arr2d[i][j] = 1;
                continue;
            }
            const bool second_diagonal = i == (arr2d.size() - j - 1);
            if (second_diagonal) {
                arr2d[i][j] = 1;
            }
        }
    }
    print_array(arr2d);
    return EXIT_SUCCESS;
}