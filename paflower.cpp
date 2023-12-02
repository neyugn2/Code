#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("paflower.inp", "r", stdin);
    freopen("paflower.out", "w", stdout);

    int n; cin >> n;
    int a[n+1], b[n+1];
    for (int i = 1; i <= n; i++)
        cin >> a[i] >> b[i];
    int dp[n+1][n+1];

    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= n; j++) {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (a[i] == b[j])
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            else
                dp[i][j] = dp[i-1][j-1] + 1;
        }
    cout << dp[n][n];
    return 0;
}
