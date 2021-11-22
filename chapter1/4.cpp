/*
Task 4: Write the program, which writes to console fibonachi numbers.
*/
#include <iostream>

int fibonachi_number(const int number) {
    if (number == 1 || number == 0) {
        return 1;
    }
    return fibonachi_number(number - 2) + fibonachi_number(number- 1);
}

int main() {
    int n = 0;
    std::cout << "Enter index fibonachi number" << std::endl;
    std::cin>>n;
    int number = fibonachi_number(n);
    std::cout << number << std::endl;

    return EXIT_SUCCESS;
}
