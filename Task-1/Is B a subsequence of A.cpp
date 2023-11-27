#include <iostream>
#include <vector>
using namespace std;

bool isSubsequence(vector<int>& A, vector<int>& B) {
    int i = 0; 
    int j = 0; 

    while (i < A.size() && j < B.size()) {
        if (A[i] == B[j]) {
            j++;
        }
        i++;
    }

    return j == B.size();
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> A(N);
    vector<int> B(M);

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    for (int i = 0; i < M; ++i) {
        cin >> B[i];
    }

    if (isSubsequence(A, B)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
