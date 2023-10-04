#include <iostream>

void sizeOfArray(int n) {
    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
//        arr[i] = ;  add random variable
    }

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    delete [] arr;
}

int main() {
    int N;

    std::cout << "Enter a size of the array: ";
    std::cin >> N;

    sizeOfArray(N);

    return 0;
}
