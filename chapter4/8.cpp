/*
Task 8: Write the program with function, arguments of a function are: function pointer and numeric array.
In function, for each array element, the function is applied.
Provide for overloading the function in such a way that the first argument was possible to transfer a number.
In this case, the elements of array product with a number.
*/
#include <iostream>

double sum(const double a) {
    return 2;
}

double integral(double (*const func)(const double arg), const int * const arr, const unsigned size_of_array) {
    double sum = 0;
    for (unsigned i = 0; i < size_of_array; i++) {
        sum += func(arr[i]);
    }
    return sum;
}

double integral(double number, const int * const arr, const unsigned size_of_array) {
    double sum = 0;
    for (unsigned i = 0; i < size_of_array; i++) {
        sum += number * arr[i];
    }
    return sum;
}

int main() {
    int arr[] = {0, 1, 2, 3, 4};
    std::cout << integral(sum, arr, 5) << " " << integral(2, arr, 5);
    return EXIT_SUCCESS;
}