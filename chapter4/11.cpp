/*
Task 11: Write the program with function, the argument function passed numeric array.
In call function elements of array are sorted in up order.
Function return a pointer to end of numeric array.
*/
#include <iostream>

const int * const foo(int * const array, int array_size) {
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4 - 1; j++) {
      if (array[j] > array[j + 1]) {
        int tmp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = tmp;
      }
    }
  }
  return array + array_size - 1;
}

int main() {
  int array[] = {4, 3, 2, 1};
  const int * const p = foo(array, 4);
  for (int i=3; i>=0; i--) {
    std::cout << *(p - i) << " ";
  }
  return EXIT_SUCCESS;
}