/*
Task 19: Write the program, in which two one-dimensional arrays are created.
The arrays are filled with random numbers, then third array is created.
Third array size is sum of sizes of first and second array. 
Third array fills like this: first to array write first element of first arrat,
then written element of second array, and so than. 
*/
#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <iterator>

int main() {
  std::vector<int> first(10, 0);
  std::vector<int> second(10, 0);
  std::vector<int> third(20, 0);
  std::mt19937 generate_random_number{std::random_device{}()};
  std::generate(first.begin(), first.end(), [&generate_random_number]()->int{return generate_random_number();});
  std::generate(second.begin(), second.end(), [&generate_random_number]()->int{return generate_random_number();});
  std::copy(first.begin(), first.end(), std::ostream_iterator<int>(std::cout, " "));
  std::cout << std::endl;
  std::copy(second.begin(), second.end(), std::ostream_iterator<int>(std::cout, " "));
  std::cout << std::endl;
  int f = 0;
  int s = 0;
  for (int i=0; i < 20; i++) {
    if (i % 2 == 0) {
      third[i] = first[f];
      f++;
    } else {
      third[i] = second[s];
      s++;
    }
  }
  std::copy(third.begin(), third.end(), std::ostream_iterator<int>(std::cout, " "));
  std::cout << std::endl;
  return EXIT_SUCCESS;
}