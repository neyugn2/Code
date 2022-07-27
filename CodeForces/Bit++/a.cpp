#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define endl "\n"

using namespace std;

int n, x;
string s;

void solve() {
    x = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> s;
        if (s == "++X" || s == "X++")
            x++;
        else
            x--;
    }
    cout << x << endl;
}

int32_t main() {
    fast();
    solve();
    return 0;
}

