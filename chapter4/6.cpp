/*
Task 6: Write the program with a function to calculate 
the exponent using the formula:
exp(x) = 1 + x + (x^2 / 2!) + .. (x^n / n!).
The function must have two arguments: x and n.
It is neccesary using recursion in function.
*/
#include <iostream>
#include <cmath>

double factorial(const double number) {
    if (number == 0) {
        return 1;
    }
    return factorial(number - 1) * number;
}

double exp(const double x, const double n) {
  if (n == 0) {
    return 1;
  }
  return exp(x, n - 1) + std::pow(x, n) / factorial(n);
}

int main() {
  std::cout << exp(1.2, 10) << " " << std::exp(1.2);
  return EXIT_SUCCESS;
}