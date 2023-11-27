#include <iostream>

using namespace std;

int *receiveAnArray(int size);

bool isPermutation(int *arrayA, int *arrayB, int size);

int main() {
    int size;
    cin >> size;
    int *arrayA = receiveAnArray(size);
    int *arrayB = receiveAnArray(size);
    bool state = isPermutation(arrayA, arrayB, size);

    if (state)
        cout << "yes";
    else
        cout << "no";
        
}

int *receiveAnArray(int size) {
    int *array = new int[size];

    for (int i = 0; i < size; i++)
        cin >> array[i];

    return array;
}

bool isAnElementOfArray(int *array, int size, int element) {
    for (int i = 0; i < size; i++)
        if (element == array[i]) {
            array[i] = 0; // to remove it from array A
            return true;
        }

    return false;
}

bool isPermutation(int *arrayA, int *arrayB, int size) {
    for (int i = 0; i < size; i++)
        if (!isAnElementOfArray(arrayA, size, arrayB[i]))
            return false;

    return true;
}