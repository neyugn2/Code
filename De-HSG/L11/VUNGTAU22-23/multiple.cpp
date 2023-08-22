#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    freopen("multiple.inp", "r", stdin);
    freopen("multiple.out", "w", stdout);

    int n, q;
    cin >> n >> q;
    int ans = 1, lt = 1;

    for (int i = 1; i < n; i++) {
        lt = (lt * q) % 2023;
        ans = (ans + lt) % 2023;
    }
    cout << ans << "\n";
    return 0;
}
