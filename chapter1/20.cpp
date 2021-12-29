/*
Task 20: Write the program, which create array. An array filled in by user via console.
*/
#include <iostream>

void print_array(const int *array, const int size) {
    for (int i=0; i < size; i++) {
        std::cout << array[i] << " ";
    }
}

int main() {
    int n = 0;
    std::cout << "Enter size of array" << std::endl;
    std::cin>>n;
    int *array = new int(n);
    
    for (int i =0; i<n; i++) {
        std::cin>>array[i];
    }
    print_array(array, n);
    delete [] array;
    return EXIT_SUCCESS;
}