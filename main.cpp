#include <iostream>
#include <cstdlib>

void fillArray(int *array, unsigned int size) {
    for (unsigned int i = 0; i < size; i++) {
        array[i] = rand() % 100;
    }
}

void printArray(int *array, unsigned int size) {
    for (unsigned int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
}

int smallestValue(int *array, unsigned int size) {
    int min = array[0];
    for (unsigned int i = 0; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

int main() {
    int size_of_array = 0;
    int *array;
    std::srand(time(nullptr);

    std::cout << "Enter a size of the array: ";
    std::cin >> size_of_array;

    array = new(std::nothrow) int[size_of_array];

    fillArray(array, size_of_array);
    printArray(array, size_of_array);

    std::cout <<"Smallest value in array is: " << smallestValue(array, size_of_array) <<std::endl;

    array = nullptr;

    return 0;
}
