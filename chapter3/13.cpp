/*
Task 13: Write the program, in which char array is created. 
The text is written to the array. 
Necessary change order text symbols to inverted order.
The last symbol becomes the first, penult symbol becomes the second and so that.
*/
#include <iostream>
#include <cstring>

int main()
{
    char text[] = "Hello, world!";
    
    std::cout << text << std::endl;
    
    for (int i = 0; i < strlen(text); i++) {
        std::cout << text[strlen(text) - 1 - i];
    }

    return 0;
}
