/*
Task 18: Write the program, in which two one-dimensional arrays are created.
The arrays are filled with random numbers, then third array is created.
Third array size is sum of sizes of first and second array. 
Third array fills like this: first, 
the elements of the first array are written to third, 
then elements of the second array are written the third. 
*/
#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <iterator>

int main() {
  std::vector<int> first(10, 0);
  std::vector<int> second(10, 0);
  std::mt19937 generate_random_number{std::random_device{}()};
  std::generate(first.begin(), first.end(), [&generate_random_number]()->int{return generate_random_number();});
  std::generate(second.begin(), second.end(), [&generate_random_number]()->int{return generate_random_number();});
  std::copy(first.begin(), first.end(), std::ostream_iterator<int>(std::cout, " "));
  std::cout << std::endl;
  std::copy(second.begin(), second.end(), std::ostream_iterator<int>(std::cout, " "));
  std::cout << std::endl;
  std::vector<int> third;
  third.insert(third.begin(), first.begin(), first.end());
  third.insert(third.end(), second.begin(), second.end());
  std::copy(third.begin(), third.end(), std::ostream_iterator<int>(std::cout, " "));
  std::cout << std::endl;
  return EXIT_SUCCESS;
}