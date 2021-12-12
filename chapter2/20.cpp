/*
Task 20. Write the program, 
in which an array of numbers is created and filled with random integers.

Elements of the array must be sorted as follows: 
first placed are even elements in decreasing order,
then the odd elements in increasing order.

Example:
7 2 5 1 8 4

8 4 2 1 5 7 

Steps:
1. Разделить массив на четные и нечетные,
2. отсортировать четные и нечетные,
3. обьединить два массива.
*/
#include <iostream>
#include <cstdlib>
#include <algorithm>


bool is_odd(const int number) {
    return number % 2;
}

bool sort_decrease_order(const int a, const int b) {
    return a > b;
}

int main() {
    srand(1);
    
    int array[10] = {0};
    
    for (auto &x : array) {
        x = rand() % 10;
        std::cout << x << " ";
    }
    std::cout << std::endl;
    
    int odd_count = 0;
    int even_count = 0;
    for (int i = 0; i < 10; i++) {
        if (is_odd(array[i])) {
            odd_count += 1;
        } else {
            even_count += 1;
        }
    }

    int *odd_array = new int[odd_count];
    int *even_array = new int[even_count];
    int oc = odd_count;
    int ec = even_count;
    
    for (int i = 0; i < 10; i++) {
        if (is_odd(array[i])) {
            oc--;
            odd_array[oc] = array[i];
        } else {
            ec--;
            even_array[ec] = array[i];
        }
    }
    
    std::sort(odd_array, odd_array + odd_count);
    std::sort(even_array, even_array + even_count, sort_decrease_order);
    
    for (int i=0; i<even_count; i++) {
        std::cout << even_array[i] << " ";
    }
    for (int i=0; i<odd_count; i++) {
        std::cout << odd_array[i] << " ";
    }

    return EXIT_SUCCESS;
}