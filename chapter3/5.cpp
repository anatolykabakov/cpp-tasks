/*
Task 5. Write the program, in which squared matrix is created.
Matrix must be filled with numeric values, then rotate clocwize.
*/
#include <iostream>
#include <array>
#include <cmath>
#include <ctime>

static unsigned int seed = static_cast<unsigned int>(std::time(nullptr));
constexpr unsigned int a = 1324;
constexpr unsigned int b = 4342;
constexpr unsigned int mask = 31313;

unsigned int pseudo_random_number_generator() {
    seed = (a * seed + b) % mask;
    return seed;
}

void print_array(std::array<std::array<unsigned int, 3>, 3> &arr2d) {
    for (int i=0; i<arr2d.size(); i++) {
        for (int j=0; j<arr2d[i].size(); j++) {
            std::cout << arr2d[i][j] << " ";
        }
        std::cout << std::endl;
    } 
    std::cout << "---------------------" << std::endl;
}


int main()
{
    std::array<std::array<unsigned int, 3>, 3> arr2d {{{1,2,3}, {4,5,6}, {7,8,9}}};

    for (int i=0; i<arr2d.size(); i++) {
        for (int j=0; j<arr2d[i].size(); j++) {
            arr2d[i][j] = pseudo_random_number_generator();
        }
    }
    print_array(arr2d);
    
    std::array<std::array<unsigned int, 3>, 3> arr2d_rotated;
    for (int i=0; i<arr2d.size(); i++) {
        for (int j=0; j<arr2d[i].size(); j++) {
            arr2d_rotated[i][j] = arr2d[arr2d[i].size() - 1 - j][i];
        }
    }

    print_array(arr2d_rotated);
    return EXIT_SUCCESS;
}