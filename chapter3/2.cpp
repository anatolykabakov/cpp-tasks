/*
Task 2. Write the program, in which number array is created, 
and for this array the sum of squares elements of array is calculated.
*/
#include <iostream>
#include <algorithm>
#include <array>
#include <vector>
#include <cmath>
#include <numeric>

int main()
{
    std::array<int, 10> arr {0};
    auto begin_it = arr.begin();
    int cout = 0;
    while (begin_it != arr.end()) {
        *begin_it = ++cout;
        begin_it++;
    }
    std::vector<int> vect;
    std::transform(arr.begin(), arr.end(), std::back_inserter(vect), [] (const int& n) {return std::pow(n, 2);});

    auto sum = std::accumulate(vect.begin(), vect.end(), 0);
    std::cout << sum;
    return EXIT_SUCCESS;
}
