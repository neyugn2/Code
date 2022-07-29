#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define endl "\n"

using namespace std;

int x;

void solve() {
    int count = 0;
    cin >> x;
    while (x - 5 > 0) {
        x -= 5;
        count++;
    }
    cout << count + 1 << endl;
}

int32_t main() {
    fast();
    solve();
    return 0;
}

