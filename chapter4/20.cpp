/*
Task 20: Write the program with function, 
arguments that passed a two-dimensional char array, and one symbol.
The result of function returned a number of letters, 
defined symbol argument, in the text, containing in a char array.
*/

#include <iostream>

unsigned get_number_of_symbols_in_text(const char** text, char symbol, unsigned rows) {
    unsigned counter = 0;
    for (unsigned i = 0; i < rows; i++) {
        for (unsigned j=0; text[i][j]; j++) {
            if (text[i][j] == symbol) {
                counter++;
            }
        }
    }
    return counter;
}

int main() {
    const char *array[2] = {"test test", "teset"};
    std::cout << get_number_of_symbols_in_text(array, 'e', 2);
    return 0;
}