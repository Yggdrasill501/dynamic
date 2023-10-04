#include <iostream>
#include <cstdlib>

void fill_array(int *array, unsigned int size) {
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 100;
    }
}

int main() {
    int size_of_array = 0;

    std::cout << "Enter a size of the array: ";
    std::cin >> size_of_array;

    int array[size_of_array];


    return 0;
}
