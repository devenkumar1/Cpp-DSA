#include <iostream>
using namespace std;

void printArray(int *array, int n) {
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void insertionSort(int *array, int n) {
    for (int i = 1; i < n; i++) {
        int current = array[i];
        int previous = i - 1;
        while (previous >= 0 && array[previous] > current) {
            array[previous + 1] = array[previous];
            previous--;
        }
        array[previous + 1] = current;
    }
    printArray(array, n);
}

int main() {
    int array[] = {5, 4, 1, 3, 2};
    int n = sizeof(array) / sizeof(int);
    insertionSort(array, n);

    return 0;
}
