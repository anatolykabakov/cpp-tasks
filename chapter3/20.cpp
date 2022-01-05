/*
Task 20: Write the program, in which 2d array is created.
The array filled with random numbers. 
New array is created on is basis, which is obtained follows:
Random row and col are removed. The result is stored in the array. 
*/
#include <iostream>
#include <cstdlib>

int main() {
  srand(1);
  int arr[5][5];

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      arr[i][j] = rand() % 10;
      std::cout << arr[i][j] << " ";
    }
    std::cout << std::endl;
  }
  int row = rand() % 4;
  int col = rand() % 4;

  std::cout << "delete row: " << row << " col: " << col << std::endl;

  for (int i = 0; i < 5; i++) {
    if (i == row) {
      continue;
    }
    for (int j = 0; j < 5; j++) {
      if (j == col) {
        continue;
      }
      std::cout << arr[i][j] << " ";
    }
    std::cout << std::endl;
  }
  
  return EXIT_SUCCESS;
}