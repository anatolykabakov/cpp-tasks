/*
Task 7: Write the program with an overloaded function. 
If the function passed one numeric argument, then the function retuned value of argument.
If the function passed two arguments, then sum of the squares of the argument values was returned.
If function passed three arguments, ir returned the sum of the arguments cubes.
*/
#include <iostream>
#include <cmath>

double sum(const double one) {
    return one;
}

double sum(const double one, const double two) {
    return std::pow(one, 2) + std::pow(two, 2);
}

double sum(const double one, const double two, const double three) {
    return std::pow(one, 3) + std::pow(two, 3) + std::pow(three, 3);
}

int main() {
    std::cout << sum(2) << " " << sum(2, 2) << " " << sum(2, 2, 2) << std::endl;
    return EXIT_SUCCESS;
}