/*
Task 1: Write the program with finction for calculate factorial of number.
*/

#include <iostream>

unsigned long long recursive_factorial(const unsigned long long number) {
  if (number == 0) {
    return 1;
  }
  return number * recursive_factorial(number - 1);
}

unsigned long long iteration_factorial(const unsigned long long number) {
  unsigned long long factorial = 1;
  for (int i = 1; i <= number; i++) {
    factorial *= i;
  }
  return factorial;
}

int main() {
  std::cout << recursive_factorial(3) << std::endl;
  std::cout << iteration_factorial(3);
  return EXIT_SUCCESS;
}