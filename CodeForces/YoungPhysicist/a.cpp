#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define endl "\n"

using namespace std;

int n, x[105], y[105], z[105];

void solve() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> x[i] >> y[i] >> z[i];
    for (int i = 1; i <= n; i++) {
        x[0] += x[i];
        y[0] += y[i];
        z[0] += z[i];
    }
    if (x[0] == 0 && y[0] == 0 && z[0] == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int32_t main() {
    fast();
    solve();
    return 0;
}

