#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//#define int long long
#define endl "\n"

using namespace std;

char a[1005];

void solve() {
    cin >> a;
    if (int(*a) > 91)
        *a = int(*a) - 32;
    cout << a;
}

int32_t main() {
    fast();
    solve();
    return 0;
}

