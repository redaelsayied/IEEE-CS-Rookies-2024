#include <iostream>
#include <vector>
using namespace std;

int knapsack(int capacity, vector<int>& weights, vector<int>& values, int n) {
    // Base case: If either the capacity becomes 0 or we have considered all items
    if (n == 0 || capacity == 0) {
        return 0;
    }

    // If the weight of the nth item is more than the capacity, skip it
    if (weights[n - 1] > capacity) {
        return knapsack(capacity, weights, values, n - 1);
    }

    // Return the maximum of two cases:
    // 1. nth item included
    // 2. nth item not included
    return max(values[n - 1] + knapsack(capacity - weights[n - 1], weights, values, n - 1),
               knapsack(capacity, weights, values, n - 1));
}

int main() {
    int N, W;
    cin >> N >> W;

    vector<int> weights(N);
    vector<int> values(N);

    for (int i = 0; i < N; ++i) {
        cin >> weights[i] >> values[i];
    }

    int maxSum = knapsack(W, weights, values, N);
    cout << maxSum << endl;

    return 0;
}
