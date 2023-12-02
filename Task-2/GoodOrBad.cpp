#include <iostream>

using namespace std;

bool getState();

void printState(bool state);

int main() {
    int numberOfTestCases;
    cin >> numberOfTestCases;

    for (int i = 0; i < numberOfTestCases; i++) {
        bool state = getState();
        printState(state);
    }

}

bool isGood(string &s) {
    return s == "010" || s == "101";
}

bool getState() {
    string s;
    cin >> s;

    for (int i = 0; i < s.length() - 2; i++) {
        string temp = s.substr(i, 3);
        if (isGood(temp))
            return true;
    }

    return false;

}

void printState(bool state) {
    if (state)
        cout << "Good" << endl;
    else
        cout << "Bad" << endl;
}