#include <iostream>
using namespace std;

int maxLengthSubsequence(int n, string s) {
    int maxLength = 1;
    for (int i = 1; i < n; ++i) {
        if (s[i] != s[i - 1]) {
            maxLength++;
        }
    }
    return min(maxLength, n);
}

int main() {
    int n;
    string s;
    cin >> n >> s;

    int result = maxLengthSubsequence(n, s);
    cout << result << endl;

    return 0;
}
