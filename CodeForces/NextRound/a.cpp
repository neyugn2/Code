#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define endl "\n"

using namespace std;

int n, k, winner;
int a[100];

void solve() {
    winner = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++) {
        if (a[i] >= a[k] && a[i] > 0)
            winner++;
    }
    cout << winner << endl;
}

int32_t main() {
    fast();
    solve();
    return 0;
}

