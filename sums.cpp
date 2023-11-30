#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("sums.inp", "r", stdin);
    freopen("sums.out", "w", stdout);

    int n, s; cin >> n >> s;
    int a[n+1];
    for (int i = 1; i <= n; i++) 
        cin >> a[i];

    int dp[n+1][s+1];
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= s; j++) {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (j >= a[i])
                dp[i][j] = max(dp[i-1][j], dp[i-1][j-a[i]] + a[i]);
            else
                dp[i][j] = dp[i-1][j];
        }
    if (dp[n][s] == s) {
        cout << "YES\n";
        int i = n, j = s;
        vector<int> pos;
        while (i > 0 && j > 0) {
            if (dp[i][j] != dp[i-1][j]) {
                pos.push_back(i);
                j -= a[i];
            }
            i--;
        }
        for (int i = pos.size()-1; i >= 0; i--)
            cout << pos[i] << " ";
        cout << "\n";
    }
    else 
        cout << "NO\n";
    return 0;
}
