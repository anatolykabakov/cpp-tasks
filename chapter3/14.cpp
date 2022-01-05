/*
Task 14: Write the program, in which a two-dimensional array is created. 
The array is filled with random numbers. 
For each row or col, a two-dimensional array estimates a greater element.
Each greater element is saved to the array.
*/
#include <iostream>
#include <cstdlib>

int main()
{
    srand(1);
    constexpr int array_cols = 9;
    constexpr int array_rows = 5;
    
    int array[array_rows][array_cols];
    for (int i = 0; i < array_rows; i++) {
        for (int j = 0; j < array_cols; j++) {
            array[i][j] = rand() % 25;
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    
    int array_max_elements[array_rows];
    for (int i = 0; i < array_rows; i++) {
        int max_element = array[i][0];
        for (int j = 1; j < array_cols; j++) {
            if (max_element > array[i][j]) {
                max_element = array[i][j];
            }
        }
        std::cout << max_element << std::endl;
        array_max_elements[i] = max_element;
    }
    return 0;
}
