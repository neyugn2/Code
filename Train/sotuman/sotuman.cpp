#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//#define int long long
#define endl "\n"

using namespace std;

int n, x[1005];

void check(int a) {
    string s = to_string(a);
    long long sum = 0;
    for (int i = 0; i < s.length(); i++)
        sum += pow(int(s[i]) - 48, 3);
    if (sum == a)
        cout << a << endl;
}

void solve() {
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> x[i];
    sort(x, x + n);
    for (int i = 0; i < n; i++)
        check(x[i]);
}

int32_t main() {
    fast();
    freopen("sotuman.inp", "r", stdin);
    freopen("sotuman.out", "w", stdout);
    solve();
    return 0;
}

