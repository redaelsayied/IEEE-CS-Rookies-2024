#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

long long getNumericValue(char c) {
    if (isdigit(c)) {
        return c - '0';
    } else {
        return c - 'A' + 10;
    }
}

char getCharFromNum(long long num) {
    if (num >= 0 && num <= 9) {
        return num + '0';
    } else {
        return num + 'A' - 10;
    }
}

long long toDecimal(const std::string &value, long long base) {
    long long result = 0;
    for (char c: value) {
        result = result * base + getNumericValue(c);
    }
    return result;
}

string fromDecimal(long long number, long long base) {
    std::string result;
    while (number > 0) {
        result += getCharFromNum(number % base);
        number /= base;
    }
    std::reverse(result.begin(), result.end());
    return result;
}

int main() {
    int choice;
    cin >> choice;

    if (choice == 1) {
        string value;
        cin >> value;

        long long base;
        std::cin >> base;

        cout << toDecimal(value, base);
    } else if (choice == 2) {
        long long number, base;
        cin >> number;

        cin >> base;

        cout << fromDecimal(number, base);
    }
    return 0;
}
