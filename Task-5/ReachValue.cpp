#include <iostream>

using namespace std;

bool isReachable(long long n) {
    if (n == 1)
        return true;
    else if (n % 20 == 0 && isReachable(n / 20))
        return true;
    else if (n % 10 == 0 && isReachable(n / 10))
        return true;
    else
        return false;
}

void printState(bool state) {
    if (state)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main() {
    long numberOfTestCases;
    cin >> numberOfTestCases;

    long long n;
    for (int i = 0; i < numberOfTestCases; i++) {
        cin >> n;
        bool state = isReachable(n);
        printState(state);
    }

    return 0;
}
