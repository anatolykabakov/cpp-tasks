/*
Task 15: Write the program with function, arguments that passed a two-dimensional numeric array, and one symbol.
The result of function returned a number of letters, defined symbol argument, in the text, containing in a char array.
*/

#include <iostream>

unsigned get_number_of_symbols_in_text(const char* text, char symbol) {
    unsigned counter = 0;
    for (unsigned i = 0; text[i]; i++) {
        if (text[i] == symbol) {
            counter++;
        }
    }
    return counter;
}

int main() {
    std::cout << get_number_of_symbols_in_text("text text", 'e');
    return 0;
}