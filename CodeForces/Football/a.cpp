#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define endl "\n"

using namespace std;

char a[105];

void solve() {
    int num = 0, mun = 0;
    cin >> a;
    for (int i = 0; i < 105; i++) {
        if (a[i] == '\0')
            break;
        if (a[i] == '1') {
            mun++;
            if (mun >= 7) {
                cout << "YES\n";
                break;
            }
        }
        else
            mun = 0;
        if (a[i] == '0') {
            num++;
            if (num >= 7) {
                cout << "YES\n";
                break;
            }
        }
        else
            num = 0;
    }
    if (num < 7 && mun < 7)
        cout << "NO\n";
}

int32_t main() {
    fast();
    solve();
    return 0;
}

