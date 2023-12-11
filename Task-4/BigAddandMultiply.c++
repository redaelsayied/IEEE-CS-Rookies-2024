#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string add(string num1, string num2) {
    if (num1.length() < num2.length())
        swap(num1, num2);

    int n1 = num1.length();
    int n2 = num2.length();
    int carry = 0;
    string result = "";

    for (int i = n1 - 1; i >= 0; --i) {
        int sum = (num1[i] - '0') + carry;
        if (n2 - 1 - (n1 - 1 - i) >= 0) {
            sum += (num2[n2 - 1 - (n1 - 1 - i)] - '0');
        }
        result.push_back(sum % 10 + '0');
        carry = sum / 10;
    }

    while (carry) {
        result.push_back(carry % 10 + '0');
        carry /= 10;
    }

    reverse(result.begin(), result.end());
    return result;
}

string multiply(string num, int multiplier) {
    int n = num.length();
    int carry = 0;
    string result = "";

    for (int i = n - 1; i >= 0; i--) {
        int product = (num[i] - '0') * multiplier + carry;
        result.push_back(product % 10 + '0');
        carry = product / 10;
    }

    while (carry) {
        result.push_back(carry % 10 + '0');
        carry /= 10;
    }

    reverse(result.begin(), result.end());
    return result;
}

int main() {
    string N;
    cin >> N;

    string addResult = add(N, "9999");
    cout << addResult << endl;

    string multiplyResult = multiply(N, 9999);
    cout << multiplyResult << endl;

    return 0;
}
