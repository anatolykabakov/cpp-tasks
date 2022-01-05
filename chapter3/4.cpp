/*
Task 4. Write the program, in which squared matrix is created.
Matrix must be filled numeric values, then transpose.
*/
#include <iostream>
#include <array>
#include <cmath>


int main()
{
    std::array<std::array<int, 3>, 3> arr2d {{{1,2,3}, {4,5,6}, {7,8,9}}};
    int sum = 0;
    for (int i=0; i<arr2d.size(); i++) {
        for (int j=0; j<arr2d[i].size(); j++) {
            if (j > i) {
                auto tmp = arr2d[i][j];
                arr2d[i][j] = arr2d[j][i];
                arr2d[j][i] = tmp;
            }
            std::cout << arr2d[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return EXIT_SUCCESS;
}