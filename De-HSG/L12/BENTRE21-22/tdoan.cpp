#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    freopen("tdoan.inp", "r", stdin);
    freopen("tdoan.out", "w", stdout);

    int n, k; cin >> n >> k;
    int a[n+1];
    for (int i = 1; i <= n; i++) cin >> a[i];
    int pos = 0, sum = 0, minLen = 0;
    
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            if (sum >= k) {
                pos = i;
                minLen = j - i;
                break;
            }
            sum += a[j];
        }
        sum = 0;
    }

    cout << pos << " " << minLen << "\n";
    return 0;
}
