/*
Task 19: Write the program with function, 
arguments that passed a two-dimensional char array, and one symbol.
The result of function returned a number of letters, 
defined symbol argument, in the text, containing in a char array.
*/

#include <iostream>
#include <cstdlib>

unsigned get_number_of_symbols_in_text(char symbol, unsigned rows, unsigned cols, char array[][10]) {
    unsigned counter = 0;
    for (unsigned i = 0; i < rows; i++) {
        for (unsigned j=0; j < cols; j++) {
            if (array[i][j] == symbol) {
                counter++;
            }
        }
    }
    return counter;
}

int main() {
    srand(1);
    unsigned rows = 10;
    unsigned cols = 10;
    char array[rows][cols];
    char symbol = 'A';

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array[i][j] = 'A' + rand() % 25;
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }
    unsigned counter = 0;
    for (unsigned i = 0; i < rows; i++) {
        for (unsigned j=0; j < cols; j++) {
            if (array[i][j] == symbol) {
                counter++;
            }
        }
    }
    std::cout << counter;
    // std::cout << get_number_of_symbols_in_text(symbol, 10, 10, array);
    return 0;
}