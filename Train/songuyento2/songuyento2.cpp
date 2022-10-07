#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define endl "\n"

using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;
    if (a < 2)
        a = 2;
    bool prime[b+1];
    memset(prime, true, sizeof(prime));
    for (int i = 2; i * i <= b; i++)
        if (prime[i] == true)
            for (int j = i * i; j <= b; j += i)
                prime[j] = false;
    for (int i = a; i <= b; i++)
        if (prime[i] == true)
            cout << i << " ";
}

int32_t main() {
    fast();
    freopen("songuyento2.inp", "r", stdin);
    freopen("songuyento2.out", "w", stdout);
    solve();
    return 0;
}

