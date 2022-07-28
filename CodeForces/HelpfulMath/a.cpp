#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define endl "\n"

using namespace std;

int a[105];

void solve() {
    int i = 0;
    while (cin >> a[i]) {
        i++;
        if (cin.get() == '\n')
            break;
    }
    sort (a, a + i);
    for (int j = 0; j < i; j++) {
        if (i == 1) {
            cout << a[0];
            break;
        }
        cout << a[j] << "+";
        if (j == i - 2) {
            cout << a[j+1];
            break;
        }
    }
}

int32_t main() {
    fast();
    solve();
    return 0;
}

