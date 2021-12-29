/*
Task 3: Write the program, which writes to console numbers, when divided by 4, give the remainded 3.
*/
#include <iostream>

int main() {
    int n = 0;
    std::cout << "Enter amount of numbers" << std::endl;
    std::cin>>n;
    for (int i=0; i<=n + 1; i++) {
        std::cout << 4 * i + 3 << std::endl;
    }
    return EXIT_SUCCESS;
}
