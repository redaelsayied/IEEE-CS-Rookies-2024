#include <iostream>

using namespace std;

void convertString(string &s);

int main() {
    string s;
    cin >> s;
    convertString(s);
    cout << s;


}

bool isItComma(char c) {
    return c == ',';
}

bool isUpperCase(char &c) {
    return c >= 'A' && c <= 'Z';
}

void rePlaceCharacter(string &string, int i) {
    if (isUpperCase(string.at(i)))
        string.at(i) = (char) (string.at(i) + 32);
    else
        string.at(i) = (char) (string.at(i) - 32);

}

void convertString(string &s) {
    for (int i = 0; i < s.length(); i++) {
        if (isItComma(s.at(i))) {
            s.at(i) = ' ';
            continue;
        } else
            rePlaceCharacter(s, i);
    }
}
