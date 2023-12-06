#include <iostream>
#include <vector>

using namespace std;

void shiftRight(int *array, int n) {
    int last = array[n - 1];
    for (int i = n - 2; i >= 0; i--)
        array[i+1] = array[i];

    array[0] = last;
}

void receiveAnArray(int *array, int n) {
    for (int i = 0; i < n; i++)
        cin >> array[i];
}

void printArray(int array[], int n) {
    for (int i = 0; i < n; i++)
        cout << array[i] << " ";
    cout << endl;
}

int main() {
    int n, x;
    cin >> n >> x;

    int array[n];
    receiveAnArray(array, n);

    for (int i = 0; i < x; i++)
        shiftRight(array, n);

    printArray(array, n);

    return 0;
}
