#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define endl "\n"

using namespace std;

int n, total, res;
int a[1005][3];

void solve() {
    res = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= 3; j++)
            cin >> a[i][j];
    for (int i = 1; i <= n; i++) {
        total = 0;
        for (int j = 1; j <= 3; j++) {
            total += a[i][j];
        }
        if (total >= 2)
            res++;
    }
    cout << res << endl;
}

int32_t main() {
    fast();
    solve();
    return 0;
}

