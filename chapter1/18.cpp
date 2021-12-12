/*
Task 18: Write the program, which writes fibonachi numbers to array.
*/
#include <iostream>
#include <stdexcept>
#include <chrono>

long long fibonachi_number(const long long number) {
    if (number < 0) {
        throw std::runtime_error("Fibonachi number can not be less than zero!");
    }
    if (number == 0) {
        return 0;
    }
    if (number == 1) {
        return 1;
    }
    return fibonachi_number(number - 2) + fibonachi_number(number- 1);
}

void print_array(const unsigned int *array, const int size) {
    for (int i=0; i < size; i++) {
        std::cout << array[i] << " ";
    }
}

int main() {
    int n = 0;
    std::cout << "Enter size fibonachi numbers array." << std::endl;
    std::cin>>n;
    unsigned int fibonachi_array[n] = {0};
    auto tic = std::chrono::high_resolution_clock::now();
    for (int i =0; i<n; i++) {
        int number = fibonachi_number(i);
        fibonachi_array[i] = number;
    }
    auto toc = std::chrono::high_resolution_clock::now();

    auto milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(toc - tic);
    std::cout << milliseconds.count() << "milliseconds\n";
    
    auto tic1 = std::chrono::high_resolution_clock::now();
    for (int i=0; i<n; i++) {
        if (i == 0) {
            fibonachi_array[i] = 0;
            continue;
        }
        if (i == 1) {
            fibonachi_array[i] = 1;
            continue;
        }
        
        fibonachi_array[i] = fibonachi_array[i-2] + fibonachi_array[i-1];
    }
    auto toc1 = std::chrono::high_resolution_clock::now();
    auto nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(toc1 - tic1);
    std::cout << nanoseconds.count() << "nanoseconds\n";

    print_array(fibonachi_array, n);
    return EXIT_SUCCESS;
}