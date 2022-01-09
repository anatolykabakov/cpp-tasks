/*
Task 5: Write the program with function for calculate the sum of natural numbers.
In function neccesary use recursion.
Necessary to oveload so that the second argument defines the degree, in which 
the terms are raised during summation.
f(n, k) where n is number, k is degree.
The sum calculate with formula:
1^k + 2^k + 3^k .. + n^k
*/
#include <iostream>
#include <cmath>

unsigned long long sum(const unsigned int number) {
  unsigned long long sum = 0;
  for (int i = 1; i <= number; i++) {
    sum += std::pow(i, 1);
  }
  return sum;
}

unsigned long long sum(const unsigned int number, const unsigned int degree) {
  unsigned long long sum = 0;
  for (int i = 1; i <= number; i++) {
    sum += std::pow(i, degree);
  }
  return sum;
}

int main() {
  std::cout << sum(5) << std::endl;
  std::cout << sum(5, 2);
  return EXIT_SUCCESS;
}