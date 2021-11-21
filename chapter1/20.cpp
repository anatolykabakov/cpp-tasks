/*
Task 20: Write the program, which create array. An array filled in by user via console.
*/
#include <iostream>

int main() {
    int n = 0;
    std::cout << "Enter size of array" << std::endl;
    std::cin>>n;
    int array[n];
    
    for (int i =0; i<n; i++) {
        std::cin>>array[i];
    }
    for (int i=0; i<n; i++) {
        std::cout << array[i] << " ";
    }
    return EXIT_SUCCESS;
}