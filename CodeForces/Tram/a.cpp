#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define endl "\n"

using namespace std;

int n, a[1005], b[1005];

void solve() {
    int cap = 0, max_cap = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i] >> b[i];
    for (int i = 1; i <= n; i++) {
        cap = cap - a[i] + b[i];
        if (max_cap < cap)
            max_cap = cap;
    }
    cout << max_cap << endl;
}

int32_t main() {
    fast();
    solve();
    return 0;
}

