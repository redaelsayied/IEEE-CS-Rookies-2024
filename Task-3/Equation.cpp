#include <iostream>
#include <string>
#include <math.h>

using namespace std;

long long calculate(int n, int x) {
    if (x <= 1)
        return 1;

    return (long long) (pow(n, x) + calculate(n, x - 2));
}

int main() {
    int n, x;
    cin >> n >> x;
    if (x % 2 == 1)
        x--;

    cout << calculate(n, x) - 1;
}
