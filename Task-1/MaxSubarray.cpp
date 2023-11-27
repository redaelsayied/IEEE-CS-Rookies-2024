#include <iostream>

using namespace std;

void printMax();

int main() {
    int numberOfCases;
    cin >> numberOfCases;

    for (int i = 0; i < numberOfCases; i++)
        printMax();
}

int *receiveAnArray(int n) {
    int *array = new int[n];

    for (int i = 0; i < n; i++)
        cin >> array[i];

    return array;
}

int getMaximum(int *array, int i, int j) {
    int max = array[i];

    for ( ; i <= j; i++)
        if (array[i] > max)
            max = array[i];

    return max;
}

void printMax() {
    int n;
    cin >> n;

    int *array = receiveAnArray(n);

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = i; j < n; j++) {
            int max = getMaximum(array, count, j);
            cout << max << " ";
            count++;
        }
    }

    cout << endl;
}