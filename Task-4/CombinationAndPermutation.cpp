#include <iostream>

using namespace std;

// Function to calculate factorial
long long factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

long long nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

long long nPr(int n, int r) {
    return factorial(n) / factorial(n - r);
}

int main() {
    int A, B;
    cin >> A >> B;

    cout << nCr(A, B) << " " << nPr(A, B) << std::endl;

    return 0;
}
