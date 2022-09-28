#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define endl "\n"

using namespace std;

int n;
int a[5] = {1, 5, 10, 20, 100};

void solve() {
    int count = 0;
    cin >> n;
    for (int i = 4; i >= 0; i--) {
        while (n - a[i] >= 0) {
            n -= a[i];
            count++;
        }
    }
    cout << count << endl;
}

int32_t main() {
    fast();
    solve();
    return 0;
}

