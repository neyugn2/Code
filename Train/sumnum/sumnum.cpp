#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define endl "\n"

using namespace std;

void solve() {
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        int res = (n % 9 == 0) ? 9 : (n % 9);
        cout << res << endl;
    }
}

int32_t main() {
    fast();
    freopen("sumnum.inp", "r", stdin);
    freopen("sumnum.out", "w", stdout);
    solve();
    return 0;
}

