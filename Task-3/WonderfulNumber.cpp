#include <iostream>
#include <string>

using namespace std;

string getBinary(int n) {
    string binaryNumber = "";
    while (n != 0) {
        int temp = n % 2;
        binaryNumber += to_string(temp);
        n /= 2;
    }
    return binaryNumber;
}

bool checkPalindrome(string string) {
    int length = string.length();

    for (int i = 0; i < length / 2; i++)
        if (string.at(i) != string.at(length - 1 - i))
            return false;

    return true;

}

bool isWonderFull(int n) {
    if (n % 2 == 0)
        return false;

    string binary = getBinary(n);
    return checkPalindrome(binary);
}


int main() {


    int n;
    cin >> n;
    bool state = isWonderFull(n);

    if (state)
        cout << "YES";
    else
        cout << "NO";


    return 0;
}
