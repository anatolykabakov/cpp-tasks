/*
Task 5: Write the program, that calculates the binomial coefficient. Check user input. .
*/
#include <iostream>

int factorial(int number) {
    if (number == 0) {
        return 1;
    }
    return factorial(number - 1) * number;
}

int binominal(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

bool is_lower_binominal_coefficient_more_than_zero(int lower_binominal_coefficient) {
    if (lower_binominal_coefficient <= 0) {
        return false;
    }
    return true;
}

int main() {
    int number = 0;
    std::cout << "Enter lower binominal coefficient" << std::endl;
    std::cin >> number;
    if (!is_lower_binominal_coefficient_more_than_zero(number)){
        return EXIT_FAILURE;
    }
    for (auto n = 0; n <= number; n++) {
      for (auto k = 0; k <= n; k++) {
         std::cout << binominal(n, k) << " ";
      }
      std::cout <<" " << std::endl;
    }
}