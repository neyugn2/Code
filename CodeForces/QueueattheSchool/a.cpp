#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define endl "\n"

using namespace std;

int n, t;
string s;

void solve() {
    char a;
    cin >> n >> t >> s;
    for (int j = 0; j < t; j++) {
        for (int i = n; i > 0; i--) {
            if (s[i] == 'G' && s[i-1] == 'B') {
                a = s[i];
                s[i] = s[i-1];
                s[i-1] = a;
            }
        }
    }
    cout << s << endl;
}

int32_t main() {
    fast();
    solve();
    return 0;
}

