/*
Task 9: Write a program to convert the distance given by fathom and arshins..
*/
#include <iostream>
#include <cmath>

constexpr double FATHOM_TO_METERS = 2.16;
constexpr double METERS_TO_CENTIMETERS = 100;
constexpr double FATHOM_TO_ARSHINS = 3;


int main() {
    int arshins = 0;
    int fathoms = 0;
    
    std::cout << "Enter fathoms" << std::endl;
    std::cin>>fathoms;
    
    std::cout << "Enter arshins" << std::endl;
    std::cin>>arshins;
    
    auto fathom_meters = fathoms * FATHOM_TO_METERS;
    auto arshins_meters = arshins * (FATHOM_TO_METERS / FATHOM_TO_ARSHINS);
    auto distance = fathom_meters + arshins_meters;
    double whole=0, fractional=0;
    fractional = std::modf(distance, &whole);
    std::cout << "Distance "<< whole << " meters, " << fractional * METERS_TO_CENTIMETERS << " centimeters";
    return EXIT_SUCCESS;
}