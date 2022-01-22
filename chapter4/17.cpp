/*
Task 17: Write the program with function, argument which passed two-dimensional numeric array.
Result of function return pointer into element with min value.
*/
#include <iostream>

int * get_min_array_element(int array[][3], unsigned rows, unsigned cols) {
    int min_index_row = 0;
    int min_index_col = 0;
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            if (array[row][col] > array[min_index_row][min_index_col]) {
                min_index_row = row;
                min_index_col = col;
            }
        }
    }
    return &array[min_index_row][min_index_col];
}

int main() {
    int A[3][3] = {{1 ,2, 3}, {4, 5, 6}, {7, 8, 9}};
    int *max_element = get_min_array_element(A, 3, 3);
    std::cout << *max_element << std::endl;
    return 0;
}