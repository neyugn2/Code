#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define endl "\n"

using namespace std;

int n, k;

void solve() {
    cin >> n >> k;
    for (int i = 1; i <= k; i++) {
        if (n % 10 == 0)
            n /= 10;
        else
            n--;
    }
    cout << n << endl;
}

int32_t main() {
    fast();
    solve();
    return 0;
}

