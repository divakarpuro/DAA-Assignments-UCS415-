#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int &x : A) cin >> x;

    sort(A.begin(), A.end());
    int l = 0, ans = 0;

    for (int r = 0; r < N; r++) {
        while (A[r] - A[l] > 10) l++;
        ans = max(ans, r - l + 1);
    }

    cout << ans;
}