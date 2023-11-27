#include <iostream>

using namespace std;

int calculateSmallestPair();

int main() {
    int numberOfTestCases;
    cin >> numberOfTestCases;

    for (int i = 0; i < numberOfTestCases; i++)
        cout << calculateSmallestPair() <<endl;
}


int *receiveAnArray(int n) {
    int *array = new int[n];

    for (int i = 0; i < n; i++)
        cin >> array[i];

    return array;
}

int resultOfPairs(int A1, int A2, int j, int i) {
    return A1 + A2 + j - i;
}

int calculateSmallestPair() {
    int n;
    cin >> n;

    int *array = receiveAnArray(n);

    int smallest = array[0] + array[1] + 1 - 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int temp = resultOfPairs(array[i], array[j], j, i);
            if (temp < smallest)
                smallest = temp;
        }
    }

    return smallest;
}