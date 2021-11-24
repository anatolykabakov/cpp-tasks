/*
Task 6: Write the program, that convert kilometers to miles.
*/
#include <iostream>
constexpr double KILOMETERS_TO_MILES_COEFF = 0.6214;

double convert_kilometers_to_miles(const double kilometers) {
    return kilometers * KILOMETERS_TO_MILES_COEFF;
}

int main() {
    int kilometers = 0;
    std::cout << "Enter kilometers" << std::endl;
    std::cin >> kilometers;
    auto miles = convert_kilometers_to_miles(kilometers);
    std::cout << "Miles: " << miles;
    return EXIT_SUCCESS;
}
