#include <iostream>

using namespace std;

int *receiveAnArray(int size);

void printArray(int *array, int size);

void replaceMinimumWithMaximum(int *array, int size);

int main() {
    int size;
    cin >> size;
    int *array = receiveAnArray(size);
    replaceMinimumWithMaximum(array, size);
    printArray(array, size);
}


int *receiveAnArray(int size) {
    int *array = new int[size];

    for (int i = 0; i < size; i++)
        cin >> array[i];

    return array;
}

void printArray(int *array, int size) {
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
}

int findMin(int *array, int size) {
    int min = array[0];
    int minIndex = 0;

    for (int i = 1; i < size; i++)
        if (array[i] < min) {
            min = array[i];
            minIndex = i;
        }

    return minIndex;
}

int findMax(int *array, int size) {
    int max = array[0];
    int maxIndex = 0;

    for (int i = 1; i < size; i++)
        if (array[i] > max) {
            max = array[i];
            maxIndex = i;
        }

    return maxIndex;
}

void replaceMinimumWithMaximum(int *array, int size) {
    int minIndex = findMin(array, size);
    int maxIndex = findMax(array, size);

    swap(array[minIndex], array[maxIndex]);

}