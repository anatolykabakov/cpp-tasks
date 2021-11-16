/*
Task 3: Write the program, which writes to console numbers, when devided by 4, give the remainded 3.
*/
#include <iostream>

int main() {
    int N = 0;
    std::cin>>N;
    for (int i=0; i<=N + 1; i++) {
        std::cout << 4 * i + 3 << std::endl;
    }
    return EXIT_SUCCESS;
}
