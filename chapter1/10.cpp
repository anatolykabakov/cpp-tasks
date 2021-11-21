/*
Task 10: Write the program to convert km/h to m/sec.
*/
#include <iostream>
const double kmh_to_meters_per_seconds = 0.277778;

double convert_velocity_kmh_to_ms(double velocity_kmh) {
    return velocity_kmh * kmh_to_meters_per_seconds;
}

int main() {
    
    double velocity = 0;
    std::cout << "Enter the velocity in km/h" << std::endl;
    std::cin>>velocity;
    
    std::cout <<  convert_velocity_kmh_to_ms(velocity);
    
    return 0;
}