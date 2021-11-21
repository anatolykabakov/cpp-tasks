/*
Task 9: Write a program to convert the distance given by fathom and arshins..
*/
#include <iostream>
#include <cmath>

const double fathom_to_meters = 2.16;
const double meters_to_centimeters = 100;
const double fathom_to_arshins = 3;


int main() {
    int arshins = 0;
    int fathoms = 0;
    
    std::cout << "Enter fathoms" << std::endl;
    std::cin>>fathoms;
    
    auto fathom_meters = fathoms * fathom_to_meters;
    auto fathom_centimeters = fathom_meters * meters_to_centimeters;
    
    std::cout << "Contain " << fathom_meters << "meters, and " << fathom_centimeters << " centimeters" << std::endl;
    
    std::cout << "Enter arshins" << std::endl;
    std::cin>>arshins;
    
    auto arshins_meters = arshins * (fathom_to_meters / fathom_to_arshins);
    auto arshins_centimeters = arshins_meters * meters_to_centimeters;
    
    std::cout << "Contain " << arshins_meters << "meters, and " << arshins_centimeters << " centimeters" << std::endl;
    
    
    return 0;
}