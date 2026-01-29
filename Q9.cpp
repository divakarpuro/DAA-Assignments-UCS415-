#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long N, H, W;
        cin >> N >> H >> W;

        long long lo = 0, hi = 1e18, ans = hi;

        while (lo <= hi) {
            long long mid = (lo + hi) / 2;
            long long fit = (mid / W) * (mid / H);

            if (fit >= N) {
                ans = mid;
                hi = mid - 1;
            } else lo = mid + 1;
        }

        cout << ans << "\n";
    }
}