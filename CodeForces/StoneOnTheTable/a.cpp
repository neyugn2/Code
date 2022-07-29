#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define endl "\n"

using namespace std;

int n;
char a[100];

void solve() {
    int num = 0;
    cin >> n >> a;
    for (int i = 1; i <= n; i++) {
        if (a[i] == a[i-1])
            num++;
    }
    cout << num << endl;
}

int32_t main() {
    fast();
    solve();
    return 0;
}

