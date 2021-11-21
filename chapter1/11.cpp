/*
Task 11: Write the program to convert m/sec to km/h.
*/
#include <iostream>
const double kmh_to_meters_per_seconds = 0.277778;

double convert_velocity_ms_to_kmh(double velocity_ms) {
    return velocity_ms / kmh_to_meters_per_seconds;
}

int main() {
    
    double velocity = 0;
    std::cout << "Enter the velocity in m/sec" << std::endl;
    std::cin>>velocity;
    
    std::cout <<  convert_velocity_ms_to_kmh(velocity);
    
    return 0;
}