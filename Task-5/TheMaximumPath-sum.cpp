#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int maxSumPath(vector<vector<int>>& matrix, int row, int col, int N, int M) {
    if (row == N - 1 && col == M - 1) {
        return matrix[row][col];
    }

    if (row >= N || col >= M) {
        return numeric_limits<int>::min();
    }

    int right = maxSumPath(matrix, row, col + 1, N, M);
    int down = maxSumPath(matrix, row + 1, col, N, M);

    return matrix[row][col] + max(right, down);
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> matrix(N, vector<int>(M));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> matrix[i][j];
        }
    }

    int maxSum = maxSumPath(matrix, 0, 0, N, M);
    cout << maxSum << endl;

    return 0;
}
