/*
Task 16: Write the program, in which char array is created.
Size of array -- random number.
It is necessary to fill the array symmetrycally.
First and last elements set 1, 
second and penultimate elements sets to 2 and so that.
*/
#include <iostream>
#include <cstdlib>

int main()
{
    srand(1);
    const int size = rand() % 100;
    unsigned int *array = new unsigned int[size];
    unsigned int count = 1;
    for (int i = 0; i < size; i++) {
        array[i] = count;
        if (i < size / 2) {
            count++;
        } else {
            count--;
        }
        std::cout << array[i] << " ";
    }
    delete [] array;
    return EXIT_SUCCESS;
}
