#include <iostream>
#include <string>

using namespace std;

void printNums(int n) {
    for (int i = 1; i < n; i++)
        cout << i << " ";

    cout << n;
}


int main() {
    int n;
    cin >> n;
    printNums(n);


    return 0;
}
