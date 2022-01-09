/*
Task 3: Write the program for calculate fibonachi numbers.
The function is passed index of fibonachi sequence.
Result of function is fibonachi number.
Consider a way to describe a function with and without recursion.
*/

#include <iostream>
#include <stdexcept>
#include <chrono>

unsigned long long fibonacci_number(const unsigned long long number) {
    if (number < 0) {
        throw std::runtime_error("Fibonacci number can not be less than zero!");
    }
    if (number == 0) {
        return 0;
    }
    if (number == 1) {
        return 1;
    }
    return fibonacci_number(number - 2) + fibonacci_number(number- 1);
}

void print_array(const unsigned long long *array, const unsigned long long size) {
    for (int i=0; i < size; i++) {
        std::cout << array[i] << " ";
    }
}

int main() {
    int n = 0;
    std::cout << "Enter size fibonacci numbers array." << std::endl;
    std::cin>>n;
    unsigned long long fibonacci_array[n];
    auto tic = std::chrono::high_resolution_clock::now();
    for (int i =0; i<n; i++) {
        int number = fibonacci_number(i);
        fibonacci_array[i] = number;
    }
    auto toc = std::chrono::high_resolution_clock::now();

    auto milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(toc - tic);
    std::cout << milliseconds.count() << " milliseconds\n";
    
    auto tic1 = std::chrono::high_resolution_clock::now();
    for (int i=0; i<n; i++) {
        if (i == 0) {
            fibonacci_array[i] = 0;
            continue;
        }
        if (i == 1) {
            fibonacci_array[i] = 1;
            continue;
        }
        
        fibonacci_array[i] = fibonacci_array[i-2] + fibonacci_array[i-1];
    }
    auto toc1 = std::chrono::high_resolution_clock::now();
    auto nanoseconds = std::chrono::duration_cast<std::chrono::nanoseconds>(toc1 - tic1);
    std::cout << nanoseconds.count() << " nanoseconds\n";

    print_array(fibonacci_array, n);
    return EXIT_SUCCESS;
}