#include <iostream>
#include <string>

using namespace std;

bool containsHello(string s) {
    string target = "hello";
    int index = 0;

    for (char ch: s) {
        if (ch == target[index]) {
            index++;
        }
        if (index == target.size()) {
            return true;
        }
    }

    return false;
}

int main() {
    string s;
    cin >> s;

    if (containsHello(s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
