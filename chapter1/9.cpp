/*
Task 9: Write a program to convert the distance given by fathom and arshins..
*/
#include <iostream>

constexpr double FATHOM_TO_METERS = 2.16;
constexpr double METERS_TO_CENTIMETERS = 100;
constexpr double FATHOM_TO_ARSHINS = 3;


int main() {
    int arshins = 0;
    int fathoms = 0;
    
    std::cout << "Enter fathoms" << std::endl;
    std::cin>>fathoms;
    
    auto fathom_meters = fathoms * FATHOM_TO_METERS;
    auto fathom_centimeters = fathom_meters * METERS_TO_CENTIMETERS;
    
    std::cout << "Contain " << fathom_meters << "meters, and " << fathom_centimeters << " centimeters" << std::endl;
    
    std::cout << "Enter arshins" << std::endl;
    std::cin>>arshins;
    
    auto arshins_meters = arshins * (FATHOM_TO_METERS / FATHOM_TO_ARSHINS);
    auto arshins_centimeters = arshins_meters * METERS_TO_CENTIMETERS;
    
    std::cout << "Contain " << arshins_meters << "meters, and " << arshins_centimeters << " centimeters" << std::endl;
    return EXIT_SUCCESS;
}