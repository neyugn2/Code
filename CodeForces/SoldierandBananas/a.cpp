#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define endl "\n"

using namespace std;

int k, n, w;

void solve() {
    int price = 0;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++)
        price = price + (k * i);
    if (price > n)
        cout << price - n << endl;
    else
        cout << "0\n";
}

int32_t main() {
    fast();
    solve();
    return 0;
}

