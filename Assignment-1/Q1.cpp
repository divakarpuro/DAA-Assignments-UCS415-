#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int data) {
    int l = 0;
    int r = n - 1;

    while (l <= r) {
        int mid = l + (r - l) / 2;  

        if (arr[mid] == data) {
            return mid;            
        } 
        else if (data < arr[mid]) {
            r = mid - 1;
        } 
        else {
            l = mid + 1;
        }
    }
    return -1; 
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);
    int data = 23;

    int result = BinarySearch(arr, n, data);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
