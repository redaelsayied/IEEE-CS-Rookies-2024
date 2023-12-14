#include <iostream>

using namespace std;

void printDigits(int n) {
    if (n < 10)
        cout << n << " ";
    else {
        int temp = n % 10;
        printDigits(n / 10);
        cout << temp << " ";
    }
}

int main() {
    int numberOfTestCases;
    cin >> numberOfTestCases;

    int n;
    for (int i = 0; i < numberOfTestCases; i++) {
        cin >> n;
        printDigits(n);
        cout << endl;
    }
}
