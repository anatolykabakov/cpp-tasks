/*
Task 7. Write the program, in which 1d array is created and fills it with random numbers.
Needed to find max and min elements and there indexes.
*/
#include <iostream>
#include <array>
#include <ctime>
#include <random>
#include <algorithm>

int main()
{
    std::array<unsigned int, 10> arr = {0};
    std::generate(arr.begin(), arr.end(), std::mt19937{std::random_device{}()});
    for (auto const& element : arr) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
    
    auto max = std::max_element(arr.begin(), arr.end());
    auto min = std::min_element(arr.begin(), arr.end());
    
    std::cout << " Max: " << *max << ", Min " << *min << std::endl;
    std::cout << " Max element index: " 
              << std::distance(arr.begin(), max) 
              << ", Min element index " 
              << std::distance(arr.begin(), min) 
              << std::endl;
    return EXIT_SUCCESS;
}