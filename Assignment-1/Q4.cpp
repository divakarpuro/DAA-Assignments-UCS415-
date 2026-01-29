#include <iostream>
using namespace std;

int maxSubarraySum(int arr[], int n) {
    int maxSoFar = arr[0];
    int currentMax = arr[0];

    for (int i = 1; i < n; i++) {
        currentMax = max(arr[i], currentMax + arr[i]);
        maxSoFar = max(maxSoFar, currentMax);
    }
    return maxSoFar;
}

int main() {
    int arr[] = {-2, -5, 6, -2, -3, 1, 5, -6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << maxSubarraySum(arr, n);

    return 0;
}