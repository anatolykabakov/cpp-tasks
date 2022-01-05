/*
Task 3. Write the program, in which number 2d array is created, 
and for this array the sum of squares elements of array is calculated.
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
            sum += std::pow(arr2d[i][j],2);
        }
    }
    std::cout << sum;
    return EXIT_SUCCESS;
}