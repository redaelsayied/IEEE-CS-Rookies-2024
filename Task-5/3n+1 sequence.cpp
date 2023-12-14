#include <iostream>

using namespace std;

int calculateSequence(int n, int sum) {
    if (n == 1)
        return sum;
    else {
        sum++;
        if (n % 2 == 0)
            return calculateSequence(n / 2, sum);
        else
            return calculateSequence(3 * n + 1, sum);
    }
}

int main() {
    int n;
    cin >> n;

    cout<<calculateSequence(n,1);


    return 0;
}
