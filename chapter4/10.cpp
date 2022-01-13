/*
Task 10: Write a program with a calculation function
the value of the polynomial at the point. 
The function arguments are an array and a point at which the polynomial value is calculated.
If we denote by a the elements of the array passed through the function argument, 
and denote by x the point at which to calculate the value of the polynomial, 
then the result of the function should return the sum a0 + a1*x .. + an*x^n. 
Provide function overload, no arguments, define a point to calculate the polynomial, 
in the console window, write the coefficients of the polynomial.
*/
#include <iostream>
#include <cmath>

double polinom(const double x, const double * const coefficients, const unsigned size) {
  double sum = 0;
  for (unsigned i = 0; i < size; i++) {
    sum += std::pow(x, i) * coefficients[i];
  }
  return sum;
}

double polinom(const double * const coefficients, const unsigned size) {
  double sum = 0;
  for (unsigned i = 0; i < size; i++) {
    std::cout << coefficients[i] << std::endl;
  }
  return sum;
}

int main() {
  const double coeficients[4] = {0, 1, 2, 3};
  std::cout << polinom(2, coeficients, 4) << std::endl;
  std::cout << polinom(coeficients, 4);
  return EXIT_SUCCESS;
}