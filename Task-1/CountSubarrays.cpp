#include <iostream>
#include <vector>

using namespace std;

int countNonDecreasingSubArrays(vector<int>& arr) {
    int count = 0;
    int n = arr.size();

    for (int i = 0; i < n; ++i) {
        int j = i;
        while (j + 1 < n && arr[j] <= arr[j + 1]) {
            ++j;
            ++count;
        }
    }

    return count + n; 
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);

        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        int result = countNonDecreasingSubArrays(A);
        cout << result << endl;
    }

    return 0;
}
