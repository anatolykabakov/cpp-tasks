/*
Task 11: Write the program to convert m/sec to km/h.
*/
#include <iostream>
constexpr double KMH_TO_METERS_PER_SECONDS = 0.277778;

double convert_velocity_ms_to_kmh(const double velocity_ms) {
    return velocity_ms / KMH_TO_METERS_PER_SECONDS;
}

int main() {
    double velocity = 0;
    std::cout << "Enter the velocity in m/sec" << std::endl;
    std::cin>>velocity;
    std::cout << "Entered velocity is " << convert_velocity_ms_to_kmh(velocity) << " km/h" << std::endl;
    return EXIT_SUCCESS;
}