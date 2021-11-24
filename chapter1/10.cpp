/*
Task 10: Write the program to convert km/h to m/sec.
*/
#include <iostream>
constexpr double KMH_TO_METERS_PER_SECONDS = 0.277778;

double convert_velocity_kmh_to_ms(const double velocity_kmh) {
    return velocity_kmh * KMH_TO_METERS_PER_SECONDS;
}

int main() {
    double velocity = 0;
    std::cout << "Enter the velocity in km/h" << std::endl;
    std::cin>>velocity;
    
    std::cout <<  convert_velocity_kmh_to_ms(velocity);
    return EXIT_SUCCESS;
}