#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define endl "\n"

using namespace std;

int w;

void input() {
    cin >> w;
}

void solve() {
    if (w <= 2)
        cout << "NO\n";
    else if (w % 2 == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int32_t main() {
    fast();
    input();
    solve();
    return 0;
}
