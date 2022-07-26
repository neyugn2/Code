#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define endl "\n"

using namespace std;

int n, m, a;

void solve() {
    cin >> n >> m >> a;
    if (n % a == 0)
        n /= a;
    else {
        n /= a;
        n++;
    }
    if (m % a == 0)
        m /= a;
    else {
        m /= a;
        m++;
    }
    cout << n * m << endl;
}

int32_t main() {
    fast();
    solve();
    return 0;
}

