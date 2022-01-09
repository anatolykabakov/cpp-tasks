/*
Task 6: Write the program with a function to calculate 
the exponent using the formula:
exp(x) = 1 + x + (x^2 / 2!) + .. (x^n / n!).
The function must have two arguments: x and n.
It is neccesary using recursion in function.
*/
#include <iostream>
#include <cmath>

long long factorial(const long long number) {
    if (number == 0) {
        return 1;
    }
    return factorial(number - 1) * number;
}

long long exp(long long x, long long n) {
  if (n == 0) {
    return 1;
  }
  long long  result = std::pow(x, n) / factorial(n) + exp(x, n - 1);
  return result;
}

int main() {
  std::cout << exp(1, 10) << " " << std::exp(1);
  return EXIT_SUCCESS;
}