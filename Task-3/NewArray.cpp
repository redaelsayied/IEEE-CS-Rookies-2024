#include <iostream>
#include <vector>

using namespace std;

vector<int> getNewArray(int *a, int *b, int n) {
    vector<int> concatenatedArray;
    concatenatedArray.reserve(n * 2); // Reserve space for the concatenated array

    for (int i = 0; i < n; i++)
        concatenatedArray.push_back(b[i]);

    for (int j = 0; j < n; j++)
        concatenatedArray.push_back(a[j]);

    return concatenatedArray;
}

void receiveAnArray(int *array, int n) {
    for (int i = 0; i < n; i++)
        cin >> array[i];
}

void printArray(const vector<int> &array) {
    for (int num : array)
        cout << num << " ";
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    int *arrayA = new int[n];
    int *arrayB = new int[n];

    receiveAnArray(arrayA, n);
    receiveAnArray(arrayB, n);

    vector<int> newArray = getNewArray(arrayA, arrayB, n);
    printArray(newArray);

    delete[] arrayA;
    delete[] arrayB;

    return 0;
}
