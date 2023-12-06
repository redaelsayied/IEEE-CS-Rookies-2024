#include <iostream>
#include <cmath>

using namespace std;

int getMax(const int *array, int n) {
    int max = array[0];
    for (int i = 1; i < n; i++)
        if (array[i] > max)
            max = array[i];

    return max;
}

int getMin(const int array[], int n) {
    int min = array[0];
    for (int i = 1; i < n; i++)
        if (array[i] < min)
            min = array[i];

    return min;
}


bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0)
            return false;
    }
    return true;
}

bool isPalindrome(int num) {
    int reversed = 0, original = num;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

int countDivisors(int num) {
    int divisors = 0;
    for (int i = 1; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            if (num / i == i)
                divisors++;
            else
                divisors += 2;
        }
    }
    return divisors;
}


int main() {
    int n;
    cin >> n;

    int arr[n];

    // Input array elements
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int maxNum = getMax(arr, n);
    int minNum = getMin(arr, n);

    int primeCount = 0;
    int palindromeCount = 0;
    int maxDivisorsNumber = 1;
    int maxDivisorsCount = 0;

    for (int i = 0; i < n; ++i) {
        if (isPrime(arr[i])) {
            primeCount++;
        }
        if (isPalindrome(arr[i])) {
            palindromeCount++;
        }
        int divisors = countDivisors(arr[i]);
        if (divisors > maxDivisorsCount) {
            maxDivisorsCount = divisors;
            maxDivisorsNumber = arr[i];
        } else if (divisors == maxDivisorsCount && arr[i] > maxDivisorsNumber) {
            maxDivisorsNumber = arr[i];
        }
    }

    cout << "The maximum number : " << maxNum << endl;
    cout << "The minimum number : " << minNum << endl;
    cout << "The number of prime numbers : " << primeCount << endl;
    cout << "The number of palindrome numbers : " << palindromeCount << endl;
    cout << "The number that has the maximum number of divisors : " << maxDivisorsNumber << endl;

    return 0;
}
