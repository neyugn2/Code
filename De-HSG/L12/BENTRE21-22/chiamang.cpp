#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    freopen("chiamang.inp", "r", stdin);
    freopen("chiamang.out", "w", stdout);

    int n; cin >> n;
    int a[n+5];
    int sum = 0;
    int curSum = 0;
    int res = 0;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    
    if (sum % 2 == 0) {
        for (int i = 1; i <= n; i++) {
            curSum += a[i];
            if (curSum == sum / 2) {
                res = i; break;
            }
        }
    }

    cout << res << "\n";
    return 0;
}
