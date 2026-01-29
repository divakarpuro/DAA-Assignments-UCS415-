#include <bits/stdc++.h>
using namespace std;

bool can(vector<int>& A, int M, int X) {
    int segments = 1, cur = 0;
    for (int a : A) {
        if ((cur | a) > X) {
            segments++;
            cur = a;
            if (cur > X) return false;
        } else cur |= a;
    }
    return segments <= M;
}

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for (int &x : A) cin >> x;

    int lo = 0, hi = 0;
    for (int x : A) hi |= x;

    int ans = hi;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        if (can(A, M, mid)) {
            ans = mid;
            hi = mid - 1;
        } else lo = mid + 1;
    }

    cout << ans;
}