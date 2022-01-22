/*
Task 18: Write the program with function, argument which passed two-dimensional numeric array.
Result of function return mean of array elements.
*/
#include <iostream>

int get_mean(int array[][3], unsigned rows, unsigned cols) {
    int min_index_row = 0;
    int sum = 0;
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            sum += array[col][row];
        }
    }
    return sum / (rows * cols);
}

int main() {
    int A[3][3] = {{1 ,2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mean = get_mean(A, 3, 3);
    std::cout << mean << std::endl;
    return 0;
}