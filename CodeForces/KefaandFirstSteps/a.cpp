#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define endl "\n"

using namespace std;

int n, a[100005];

void solve() {
    cin >> n;
    int count = 0, res = 0;
    for (int i = 1; i <= n; i++) 
        cin >> a[i];
    for (int i = 1; i <= n; i++) {
        if (a[i] <= a[i+1])
            count++;
        else
            count = 0;
        res = max(res, count);
    }
    cout << res + 1 << endl;
}

int32_t main() {
    fast();
    solve();
    return 0;
}

