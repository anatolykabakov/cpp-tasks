/*
Task 10. Write the program, in which 2d array is created, array filled with natural numbers.
Filling starts from the top left element, left to right, top to bottom.
Fill the first column, then the second, and so on.
*/
#include <iostream>
#include <array>

int main()
{
    std::array<std::array<unsigned int, 3>, 3> arr = {0};
    int cout = 0;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            arr[j][i] = cout;
            cout++;
        }
    }
    
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
    return EXIT_SUCCESS;
}