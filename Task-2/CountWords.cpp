#include <iostream>

using namespace std;

bool isEndOfWord(char c) {
    return (c == ' ' || c == '!' || c == '.' || c == '?' || c == ',');
}

int getNumberOfWords(string &s) {
    int count = 0;
    for (int i = 1; i < s.length(); i++)
        if (isEndOfWord(s.at(i)) && !isEndOfWord(s.at(i - 1)))
            count++;

    if (!isEndOfWord(s.at(s.length() - 1)))
        count++;


    return count;
}

int main() {
    string s;
    getline(cin, s);

    cout << getNumberOfWords(s);

}

