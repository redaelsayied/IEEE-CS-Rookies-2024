#include <iostream>

using namespace std;

bool isValidCode(int a, int b, string &code);

int main() {
    int a, b;
    string code;
    cin >> a >> b >> code;


    if (isValidCode(a, b, code))
        cout << "Yes";
    else
        cout << "No";

}

bool isDigit(char c) {
    return c >= '0' && c <= '9';
}

bool isValidCode(int a, int b, string &code) {
    if (code.length() != (a + b + 1))
        return false;

    else if (code.at(a ) != '-')
        return false;

    for (int i = 0; i < code.length(); i++) {
        if (i == (a))
            continue;

        if (!isDigit(code.at(i)))
            return false;

    }

    return true;
}