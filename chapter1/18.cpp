/*
Task 18: Write the program, which writes fibonachi numbers to array.
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
    std::cout << "Enter size fibonachi numbers array" << std::endl;
    std::cin>>n;
    unsigned int fibonachi_array[n];
    for (int i =0; i<n; i++) {
        int number = fibonachi_number(i);
        fibonachi_array[i] = number;
    }
    for (int i=0; i<n; i++) {
        std::cout << fibonachi_array[i] << " ";
    }
    return EXIT_SUCCESS;
}