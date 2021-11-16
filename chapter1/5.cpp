/*
Task 5: TODO.
*/
#include <iostream>

const int factorial(const int& number) {
    if (number == 0) {
        return 1;
    }
    return factorial(number - 1) * number;
}

const int binominal(const int& n, const int& k) {
    if (n <= k) {
        return 0;
    }
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main() {
    int n = 0;
    std::cin >> n;
    for (int k = 0; k < n; k++) { 
        std::cout << binominal(n, k) << std::endl;
    }
    return EXIT_SUCCESS;
}
