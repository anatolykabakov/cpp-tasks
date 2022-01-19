/*
Task 14: Write the program with function, the argument of a function is char array with text.
In a function call, text in the array writes in backward order. 
Try to implement the function with recursion. 
*/

#include <iostream>

void printing_backward_order_recursive(const char * text, unsigned k) {
    if (text[k] == '\0') {
        return;
    }
    printing_backward_order_recursive(text, k + 1);
    std::cout << text[k];
}

int main() {
    char text[] = "Try to implement the function with recursion";
    printing_backward_order_recursive(text, 0);
    return 0;
}