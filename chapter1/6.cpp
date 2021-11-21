/*
Task 6: Write the program, that convert kilometers to miles.
*/
#include <iostream>

double convert_kilometers_to_miles(double kilometers) {
    const double kilometers_to_miles_coeff = 1.609;
    return kilometers * kilometers_to_miles_coeff;
}

int main() {
    int kilometers = 0;
    std::cout << "Enter kilometers" << std::endl;
    std::cin >> kilometers;
    auto miles = convert_kilometers_to_miles(kilometers);
    std::cout << "Miles: " << miles;
}
