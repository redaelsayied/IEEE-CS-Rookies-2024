#include <iostream>

using namespace std;

void printNums(int n) {
    if (n != 1)
        printNums(n - 1);

    cout << n << endl;
}

int main() {
    int n;
    cin >> n;
    printNums(n);
}
