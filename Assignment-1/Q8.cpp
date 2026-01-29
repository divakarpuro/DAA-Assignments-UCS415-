#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, k;
    cin >> N >> k;

    vector<int> A(N), B;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        B.push_back(A[i]);
    }

    sort(B.begin(), B.end());

    long long sum = 0;

    for (int i = 0; i < N; i++) {
        // first index of element > A[i]
        int idx = upper_bound(B.begin(), B.end(), A[i]) - B.begin();
        int greaterCount = N - idx;

        if (greaterCount >= k)
            sum += A[i];
    }

    cout << sum;
}