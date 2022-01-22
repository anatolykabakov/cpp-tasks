/*
Task 16: Write the program with function, argument which passed two-dimensional numeric array.
Result of function return reference into element with max value.
*/
#include <iostream>

int & get_max_array_element(int array[][3], unsigned rows, unsigned cols) {
    int max_index_row = 0;
    int max_index_col = 0;
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            if (array[row][col] > array[max_index_row][max_index_col]) {
                max_index_row = row;
                max_index_col = col;
            }
        }
    }
    return array[max_index_row][max_index_col];
}

int main() {
    int A[3][3] = {{1 ,2, 3}, {4, 5, 6}, {7, 8, 9}};
    int max_element = get_max_array_element(A, 3, 3);
    std::cout << max_element << std::endl;
    return 0;
}