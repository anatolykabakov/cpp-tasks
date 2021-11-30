/*
Task 7: Write the program, that convert kilometers and meters to miles and foots.
*/
#include <iostream>
#include <cmath>
constexpr double KILOMETERS_TO_METERS = 1000;
constexpr double KILOMETERS_TO_MILES = 1.609;
constexpr double METERS_TO_FOOTS = 3.28084;
constexpr double MILES_TO_FOOTS = 5280;

double convert_kilometers_to_miles(const double kilometers) {
    return kilometers / KILOMETERS_TO_MILES;
}

double convert_meters_to_miles(const double meters) {
    return (meters / KILOMETERS_TO_METERS) / KILOMETERS_TO_MILES;
}

double convert_miles_to_foots(const double miles) {
    return miles * MILES_TO_FOOTS;
}

int main() {
    double kilometers = 0;
    double meters = 0;
    std::cout << "Enter kilometers" << std::endl;
    std::cin >> kilometers;
    std::cout << "Enter meters" << std::endl;
    std::cin >> meters;
    double miles = convert_kilometers_to_miles(kilometers);
    miles += convert_meters_to_miles(meters);
    double miles_integral_part = 0;
    const double miles_fractional_part = std::modf(miles, &miles_integral_part);
    std::cout 
      << "Distance "
      << static_cast<int>(miles_integral_part)
      << " miles, "
      << static_cast<int>(convert_miles_to_foots(miles_fractional_part))
      << " foots";
    return EXIT_SUCCESS;
}