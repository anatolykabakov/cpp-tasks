/*
Task 5: Write the program, that calculates the binomial coefficient. Check user input. .
*/
#include <iostream>
#include <stdexcept>


long long factorial(const long long number) {
    if (number == 0) {
        return 1;
    }
    return factorial(number - 1) * number;
}

int binominal(const int n, const int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

bool is_coefficient_valid(const int lower_binominal_coefficient) {
    return lower_binominal_coefficient >= 0;
}

int main() {
    int number = 0;
    std::cout << "Enter lower binominal coefficient" << std::endl;
    std::cin >> number;
    if (!is_coefficient_valid(number)){
        throw std::invalid_argument("received negative value");
    }
    for (auto n = 0; n <= number; n++) {
      for (auto k = 0; k <= n; k++) {
         std::cout << binominal(n, k) << " ";
      }
      std::cout <<" " << std::endl;
    }
    return EXIT_SUCCESS;
}