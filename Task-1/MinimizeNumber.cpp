#include <iostream>

using namespace std;

int *receiveAnArray(int size);

bool isEvenArray(int *array, int size);

void divideArrayByTwo(int *array, int size);

int main() {
    int size;
    cin >> size;
    int *array = receiveAnArray(size);
    int numberOfOperation = 0;

    while (isEvenArray(array, size)) {
        numberOfOperation++;
        divideArrayByTwo(array, size);
    }

    cout << numberOfOperation;
}

int *receiveAnArray(int size) {
    int *array = new int[size];

    for (int i = 0; i < size; i++)
        cin >> array[i];

    return array;
}

bool isEvenArray(int *array, int size) {
    for (int i = 0; i < size; i++)
        if (array[i] % 2 != 0)
            return false;

    return true;
}

void divideArrayByTwo(int *array, int size) {
    for (int i = 0; i < size; i++)
        array[i] /= 2;

}


