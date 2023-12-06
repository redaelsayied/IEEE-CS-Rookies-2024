#include <iostream>
#include <vector>

using namespace std;

void swapRows(vector<vector<int>>& matrix, int rowX, int rowY) {
    swap(matrix[rowX - 1], matrix[rowY - 1]);
}

void swapColumns(vector<vector<int>>& matrix, int colX, int colY) {
    for (int i = 0; i < matrix.size(); ++i) {
        swap(matrix[i][colX - 1], matrix[i][colY - 1]);
    }
}

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;

    vector<vector<int>> matrix(N, vector<int>(N));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> matrix[i][j];
        }
    }

    swapRows(matrix, X, Y);
    swapColumns(matrix, X, Y);

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
