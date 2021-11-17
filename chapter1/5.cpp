/*
Task 5: Write the program, that calculates the binomial coefficient. Check user input. .
*/
#include <iostream>

const int factorial(const int& number) {
    if (number == 0) {
        return 1;
    }
    return factorial(number - 1) * number;
}

const int binominal(const int& n, const int& k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

bool is_lower_binominal_coefficient_more_than_zero(const int& lower_binominal_coefficient) {
    if (lower_binominal_coefficient <= 0) {
        return false;
    }
    return true;
}

int main() {
    int n = 0;
    std::cin >> n;
    if (!is_lower_binominal_coefficient_more_than_zero(n)){
        return EXIT_FAILURE;
    }
    for (int k = 0; k <= n; k++) {
        std::cout << binominal(n, k) << std::endl;
    }
    return EXIT_SUCCESS;
}