#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define endl "\n"

using namespace std;

int a[10][10], r, c;

void solve() {
    for (int i = 1; i <= 5; i++)
        for (int j = 1; j <= 5; j++) {
            cin >> a[i][j];
            if (a[i][j] == 1) {
                c = j;
                r = i;
            }
        }
    c = abs(3-c);
    r = abs(3-r);
    cout << c + r << endl;
}

int32_t main() {
    fast();
    solve();
    return 0;
}

