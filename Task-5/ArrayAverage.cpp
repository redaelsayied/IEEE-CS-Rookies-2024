#include <iostream>
#include <iomanip> // For setprecision

using namespace std;

double calculateAverage(int arr[], int length, int index = 0, double sum = 0) {
    if (index == length) {
        return sum / length;
    }

    sum += arr[index];
    index++;

    return calculateAverage(arr, length, index, sum);
}

int main() {
    // to allow him to print  with 6 digits after the decimal point.
    cout << fixed << setprecision(6);

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; ++i)
        cin >> arr[i];


    cout << calculateAverage(arr, n) << endl;

    return 0;
}
