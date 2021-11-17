/*
Task 7: Write the program, that convert kilometers and meters to miles and foots.
*/
#include <iostream>

double convert_kilometers_to_miles(int kilometers) {
    const double kilometers_to_miles_coeff = 1.609;
    return kilometers * kilometers_to_miles_coeff;
}

double convert_meters_to_feets(int meters) {
    const double meters_to_foots_coeff = 3.28084;
    return meters * meters_to_foots_coeff;
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
}
