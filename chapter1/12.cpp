/*
Task 12: Write the program, which calculates the sum of natural numbers.
*/
#include <iostream>
#include<limits>

int main() {
    
    std::cout << "Enter 10 natural numbers" << std::endl;
    unsigned int sum = 0;
    for (int i=0; i<10; i++) {
        unsigned int number = 0;
        std::cin>>number;
        sum+=number;
    }
    std::cout << sum;
    return 0;
}