#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<long long> A(N);
    for (auto &x : A) cin >> x;

    sort(A.begin(), A.end());
    cout << A[N-1] + A[N-2];
}