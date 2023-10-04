#include <iostream>
#include <cstdlib>

void array_of_random_numbers(int size) {
    int array[size];

    for (int i = 0; i < size; i++) {
        array[i] = rand() % 100;
    }

    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
}

void smallest_value(int array[], int size) {
    int smallest = array[0];

    for (int i = 0; i < size; i++) {
        if (array[i] < smallest) {
            smallest = array[i];
        }
    }

    std::cout << "The smallest value is: " << smallest << std::endl;
}

int main() {
    int size_of_array = 0;

    std::cout << "Enter a size of the array: ";
    std::cin >> size_of_array;

    array_of_random_numbers(size_of_array);

    smallest_value()

    return 0;
}
