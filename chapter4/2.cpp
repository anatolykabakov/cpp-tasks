/*
Task 2: Write the program for calculate double factorial of number.
This is product of natural numbers with formula:
n!! = n * (n - 2) * (n - 4) * .., where n is argument of factorial.
*/
#include <iostream>
#include <stdexcept>

unsigned long long recursive_double_factorial(const unsigned long long number) {
  if (number < 0) {
    throw std::runtime_error("Number can not be less than zero");
  }
  if (number == 0 || number == 1) {
    return 1;
  }
  return number * recursive_double_factorial(number - 2);
}

unsigned long long iterative_double_factorial(const unsigned long long number) {
  if (number < 0) {
    throw std::runtime_error("Number can not be less than zero");
  }
  unsigned long long double_factorial = 1;
  for (int i=number; i >= 1; i=i-2) {
    double_factorial *= i;
  }
  return double_factorial;
}

int main() {
  for (int i = 0; i < 20; i++) {
    std::cout << recursive_double_factorial(i) << " ";
  }
  std::cout << std::endl;
  for (int i = 0; i < 20; i++) {
    std::cout << iterative_double_factorial(i) << " ";
  }
  return EXIT_SUCCESS; 
}