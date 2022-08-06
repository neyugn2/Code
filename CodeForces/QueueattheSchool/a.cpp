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
    while (t--) {
        for (int i = 1; i < n; i++) {
            if (s[i] == 'G' && s[i-1] == 'B') {
                s[i] = 'B';
                s[i-1] = 'G';
                i++;
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

