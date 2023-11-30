#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("valy.inp", "r", stdin);
    freopen("valy.out", "w", stdout);

    int n, w; cin >> n >> w;
    int a[n+1], c[n+1];
    int dp[n+1][w+1];
    for (int i = 1; i <= n; i++)
        cin >> a[i] >> c[i];

    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= w; j++) {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (j >= a[i])
                dp[i][j] =  max(dp[i][j-a[i]] + c[i], dp[i-1][j]);
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    cout << dp[n][w] << "\n";

    int i = n, j = w;
    int cnt = 0;
    vector<pair<int, int>> ans;
    while (i > 0 && j > 0) {
        if (dp[i][j] != dp[i-1][j]) {
            while (dp[i][j] != dp[i-1][j]) {
                cnt++;
                j -= a[i];
            }
            ans.push_back(make_pair(i, cnt));
            cnt = 0;
        }
        i--;
    }
    for (int i = ans.size()-1; i >= 0; i--)
        if (ans[i].second != 0)
            cout << ans[i].first << " " << ans[i].second << "\n";
    return 0;
}
