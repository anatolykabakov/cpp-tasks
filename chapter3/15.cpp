/*
Task 15: Write the program, in which char array is created. 
The char array is filled with text. Text can be contain several world.
Necessary to count the numer and size of world.
*/
#include <iostream>

int main()
{
    char text[] = "Text can be contain several world.";
    
    unsigned int world_number = 0;
    unsigned int world_size = 0;
    for (char* ptr=text; *ptr; ptr++) {
        if (*ptr == ',' || *ptr == '.') {
            continue;
        }
        if (*ptr == ' ') {
            world_number++;
            std::cout << "Find world " << world_number << " with size " << world_size << std::endl;
            world_size = 0;
            continue;
        }
        world_size++;
    }
    //last world check
    if (world_size > 1) {
        world_number++;
        std::cout << "Find world " << world_number << " with size " << world_size << std::endl;
    }
    return EXIT_SUCCESS;
}
