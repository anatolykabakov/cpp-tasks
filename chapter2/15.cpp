/*
Task 15. Write the program with function, which for self integer argument,
returns the sum of divisors.
*/
#include <iostream>

int sum_of_divisors(int number) {
    int sum = 0;
    for (int i=1;i<=number;i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    return sum;
}


int main()
{
    std::cout << sum_of_divisors(25);
    return EXIT_SUCCESS;
}
