/*
Taks 1. Write the program, in which creates two number arrays same size.
Necessary to calculate the sum of pairwise product elements of arrays.
*/
#include <iostream>
#include <stdexcept>

int product(int num, int den) {
    if (num == 0) {
        throw std::runtime_error("num is zero");
    }
    if (den == 0) {
        throw std::runtime_error("den is zero");
    }
    return num * den;
}

int main()
{
    int arr1[] = {1,2,3,0};
    int arr2[] = {2,0,3,4};
    int sum = 0;
    for (int i=0; i<4; i++) {
        try {
          sum += product(arr1[i], arr2[i]);
        } catch (std::runtime_error &e) {
          std::cout << e.what() << std::endl;;
        }
    }
    std::cout << "The sum is " << sum;
    return EXIT_SUCCESS;
}
