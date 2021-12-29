/*
Task 8: Write the program, that convert fathom to meters.
*/
#include <iostream>
const double FATHOM_TO_METERS_COEFF = 2.16;

double convert_fathom_to_meters(const int fathom) {
    return fathom * FATHOM_TO_METERS_COEFF;
}

int main() {
    int fathom = 0;
    std::cout << "Enter fathoms" << std::endl;
    std::cin >> fathom;
    auto meters = convert_fathom_to_meters(fathom);
    std::cout << "Fathom -> meters: " << meters << std::endl;
    return EXIT_SUCCESS;
}
