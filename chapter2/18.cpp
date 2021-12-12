/*
Task 18. Write a program that creates and fill an array of random numbers.
Then, the array will be sorted in decreasing order.
*/
#include <iostream>
#include <cstdlib>

int main() {
    srand(1);
    
    int array[10] = {0};
    
    for (auto &x : array) {
        x = rand() % 10;
    }
    
    std::cout << std::endl;
    
    for (int i = 0; i < 10; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
    
    for (int i = 0; i<5; i++) {
        int tmp = array[i];
        array[i] = array[9 - i];
        array[9 - i] = tmp;
    }
    
    std::cout << std::endl << std::endl;
    
    for (int i = 0; i < 10; i++) {
        std::cout << array[i] << " ";
    }

    return EXIT_SUCCESS;
}