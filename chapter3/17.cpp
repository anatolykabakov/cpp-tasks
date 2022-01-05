/*
Task 17: Write the program in which three one-dimensional arrays are created.
The first two array are filled with random numbers. 
The third array is filled like this:
elements of two array are compared, max element written to the third array.
*/
#include <iostream>
#include <vector>
#include <random>
#include <iterator>
#include <algorithm>
#include <functional>

int main()
{
    std::mt19937 random_generator{std::random_device{}()};
    std::uniform_int_distribution<int> uid(0, 10);
    auto generate = std::bind(uid, random_generator);
    std::vector<int> first(10, 0);
    std::vector<int> second(10, 0);
    std::vector<int> third(10, 0);
    std::generate(first.begin(), first.end(), [&generate]() -> int { return generate(); } ); 
    std::generate(second.begin(), second.end(), [&generate]() -> int { return generate(); } ); 
    std::copy(first.begin(), first.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;
    std::copy(second.begin(), second.end(), std::ostream_iterator<int>(std::cout, " "));
    for (int i = 0; i < 10; i++) {
        if (first[i] > second[i]) {
            third[i] = first[i];
        } else {
            third[i] = second[i];
        }
    }
    std::cout << std::endl;
    std::copy(third.begin(), third.end(), std::ostream_iterator<int>(std::cout, " "));
    return EXIT_SUCCESS;
}