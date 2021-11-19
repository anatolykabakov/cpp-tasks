/*
Task 8: Write the program, that convert fathom to meters.
*/
#include <iostream>

double convert_fathom_to_meters(const int& fathom) {
    const double fathom_to_meters_coeff = 2.16;
    return fathom * fathom_to_meters_coeff;
}

int main() {
    int fathom = 0;
    std::cout << "Enter fathoms" << std::endl;
    std::cin >> fathom;
    auto meters = convert_fathom_to_meters(fathom);
    std::cout << "Fathom -> meters: " << meters << std::endl;
}
