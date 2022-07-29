#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define endl "\n"

using namespace std;

int a, b;

void solve() {
    int year = 0;
    cin >> a >> b;
    while (1) {
        if (a > b)
            break;
        a *= 3;
        b *= 2;
        year++;
    }
    cout << year << endl;
}

int32_t main() {
    fast();
    solve();
    return 0;
}

