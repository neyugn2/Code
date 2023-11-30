#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("caykhe.inp", "r", stdin);
    freopen("caykhe.out", "w", stdout);

    int n, m; cin >> n >> m;
    int a[n+1], w[n+1];
    int dp[n+1][m+1];

    for (int i = 1; i <= n; i++)
        cin >> a[i] >> w[i];

    for (int i = 0; i <= n; i++)
        dp[i][0] = 0;
    for (int i = 0; i <= m; i++)
        dp[0][i] = 0;

    for (int i = 1; i <= n; i++) {
        for (int j  = 1; j <= m; j++) {
            if (j >= w[i] && dp[i-1][j-w[i]] + a[i] > dp[i-1][j])
                dp[i][j] = dp[i-1][j-w[i]] + a[i];
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    cout << dp[n][m] << "\n";

    int i = n, j = m;
    vector<int> items;
    int cnt = 0;
    while (i > 0 && j > 0) {
        if (dp[i][j] != dp[i-1][j]) {
            items.push_back(i);
            cnt++;
            j -= w[i];
        }
        i--;
    }
    cout << cnt << " ";
    for (int i = items.size()-1; i >= 0; i--)
        cout << items[i] << " ";
    return 0;
}
