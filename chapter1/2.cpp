/*
Task 2: Write the program, which writes to console the first five odd numbers.
*/
#include <iostream>

bool is_odd_number(const int& number) {
    return number % 2;
}

int main() {
    const int n = 10;
    for (int i=0; i<=n; i++) {
        if (is_odd_number(i))
          std::cout << i << std::endl;
    }
    return EXIT_SUCCESS;
}