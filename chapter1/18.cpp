/*
Task 18: Write the program, which writes fibonachi numbers to array.
*/
#include <iostream>

long long fibonachi_number(const long long number) {
    if (number == 1 || number == 0) {
        return 1;
    }
    return fibonachi_number(number - 2) + fibonachi_number(number- 1);
}

void print_array(const unsigned int *array, const int size) {
    for (int i=0; i < size; i++) {
        if (array[i] != 0) {
            std::cout << array[i] << " ";
        }
    }
}

int main() {
    int n = 0;
    std::cout << "Enter size fibonachi numbers array" << std::endl;
    std::cin>>n;
    unsigned int fibonachi_array[n];
    for (int i =0; i<n; i++) {
        int number = fibonachi_number(i);
        fibonachi_array[i] = number;
    }

    print_array(fibonachi_array, n);
    return EXIT_SUCCESS;
}