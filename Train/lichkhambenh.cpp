#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define endl "\n"

using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    cout << (n-1) * 10 - (n-1) * x << endl;
}

int32_t main() {
    fast();
    freopen("lichkhambenh.inp", "r", stdin);
    freopen("lichkhambenh.out", "w", stdout);
    solve();
    return 0;
}

