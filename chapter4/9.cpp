/*
Task 9: Write a program with a function
is for computing the derivate of another function.
The first argument is a pointer to a differentiable function.
The second argument is the point at which the derivative is calculated.
To calculate the derivative of a function, use the formula
f'(x) = (f(x+h) -f(x))/h where h is a small increment.
Provide Function Overloading so that possible to pass numeric array
instead the second argument.
In this case the argument of function passed one more additional array
in which write derivate values in each points, defined the elements first array.
*/
#include <iostream>

constexpr double DERIVATIVE_INCREMENT = 0.0001;

double calculate_derivate(double (*const func)(const double), const double x) {
  return (func(x + DERIVATIVE_INCREMENT) - func(x)) / DERIVATIVE_INCREMENT; 
}

const double * const calculate_derivate(double (*const func)(const double), const double * const x, unsigned array_size) {
  double * result = new double[array_size];
  for (unsigned i = 0; i < array_size; i++) {
    result[i] = calculate_derivate(func, x[i]);
  }
  return result; 
}

double f(const double x) {
  return 1 + x * x;
}

int main() {
  std::cout << calculate_derivate(f, 10) << std::endl;
  double arr[4] = {0, 1, 2, 3};
  const double * const p = calculate_derivate(f, arr, 4);
  for (unsigned i = 0; i < 4; i++) {
    std::cout << p[i] << std::endl;
  }
  return EXIT_SUCCESS;
}