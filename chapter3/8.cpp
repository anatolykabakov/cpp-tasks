/*
Task 8. Write the program, in which 1d array is created and fills it with random numbers.
Needed to cyclically rearrange elements. 
The number of rearranges is set by user from the keyboard.
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
    unsigned number_of_rearrenges = 0;
    std::cin >> number_of_rearrenges;
    int count = 1;
    std::array<unsigned int, 10>::iterator it = arr.begin();
    for (++it; it != arr.end(); ++it, ++count) {
        if (count > number_of_rearrenges) break;
        std::iter_swap(it, std::prev(it));
    }
    for (auto const& element : arr) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
    return EXIT_SUCCESS;
}