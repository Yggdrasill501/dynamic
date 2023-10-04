#include <iostream>
#include <cstdlib>

void fillArray(int *array, unsigned int size) {
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 100;
    }
}

void printArray(int *array, unsigned int size) {
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
}

void smallestValue(int *array, unsigned int size) {
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
    int *array;

    std::cout << "Enter a size of the array: ";
    std::cin >> size_of_array;

    array = new int[size_of_array];

    fillArray(array, size_of_array);
    printArray(array, size_of_array);

    std::cout <<"Smallest value in array is: " << smallestValue(array, size_of_array) <<std::endl;
    delete[] array;

    return 0;
}
