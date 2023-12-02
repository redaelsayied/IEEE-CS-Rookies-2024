#include <iostream>

using namespace std;

const string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
const string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

int indexFromOriginal(char &c) {
    for (int i = 0; i < original.length(); i++)
        if (c == original.at(i))
            return i;

    return -1;
}

int indexFromKey(char &c) {
    for (int i = 0; i < key.length(); i++)
        if (c == key.at(i))
            return i;

    return -1;
}

void encrypting(string &s) {
    for (char & i : s) {
        int index = indexFromOriginal(i);
        i = key.at(index);
    }
}

void decrypting(string &s) {
    for (char & i : s) {
        int index = indexFromKey(i);
        i = original.at(index);
    }
}

int main() {
    int state;
    string s;

    cin >> state >> s;

    if (state == 1)
        encrypting(s);
    else
        decrypting(s);

    cout << s;
}
