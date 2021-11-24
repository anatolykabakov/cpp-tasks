/*
Task 7: Write the program, that convert kilometers and meters to miles and foots.
*/
#include <iostream>
constexpr double KILOMETERS_TO_MILES_COEFF = 1.609;
constexpr double METERS_TO_FOOTS_COEFF = 3.28084;

double convert_kilometers_to_miles(const int kilometers) {
    return kilometers * KILOMETERS_TO_MILES_COEFF;
}

double convert_meters_to_feets(const int meters) {
    return meters * METERS_TO_FOOTS_COEFF;
}

int main() {
    int kilometers = 0;
    int meters = 0;
    std::cout << "Enter kilometers" << std::endl;
    std::cin >> kilometers;
    auto miles = convert_kilometers_to_miles(kilometers);
    std::cout << "Kilometers -> Miles: " << miles << std::endl;
    std::cout << "Enter meters" << std::endl;
    std::cin >> meters;
    auto feets = convert_meters_to_feets(meters);
    std::cout << "Meters -> Foots: " << feets;
    return EXIT_SUCCESS;
}
