/*
Task 4: Write the program, which writes to console fibonachi numbers.
*/
#include <iostream>

const int fibonachi_number(const int& number) {
    if (number == 1 || number == 0) {
        return 1;
    }
    return fibonachi_number(number - 2) + fibonachi_number(number- 1);
}

int main() {
    int N = 0;
    std::cin>>N;
    const int f = fibonachi_number(N);
    std::cout << f << std::endl;

    return EXIT_SUCCESS;
}
