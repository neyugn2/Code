#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define endl "\n"

using namespace std;

void solve() {
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i * i <= n; i++)
        if (n % i == 0) {
            if (n / i == i)
                cnt++;
            else
                cnt += 2;
        }
    cout << cnt << endl;
}

int32_t main() {
    fast();
    freopen("demuoc.inp", "r", stdin);
    freopen("demuoc.out", "w", stdout);
    solve();
    return 0;
}

