#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define endl "\n"

using namespace std;

string s, t;

void solve() {
    cin >> s >> t;
    int len = s.length() - 1;
    int count = 0;
    for (int i = 0; i <= len; i++) {
        if (s[i] == t[len - i]) {
            count++;
        }
    }
    if (count == len + 1)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int32_t main() {
    fast();
    solve();
    return 0;
}

