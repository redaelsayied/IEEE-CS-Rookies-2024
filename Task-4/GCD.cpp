#include <iostream>

using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return (a * b) / gcd(a, b);
}

int main() {
    long long A, B;
    cin >> A >> B;

    long long GCD = gcd(A, B);
    long long LCM = lcm(A, B);

    cout << GCD << " " << LCM << endl;

    return 0;
}
