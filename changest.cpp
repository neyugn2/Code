#include <bits/stdc++.h>

using namespace std;

int min(int x, int y, int z) {
    return min(min(x, y), z);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("changest.inp", "r", stdin);
    freopen("changest.out", "w", stdout);

    string x, y;
    cin >> x >> y;
    int n = x.length(), m = y.length();
    int dp[n+1][m+1];
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (i == 0)
                dp[i][j] = j;
            else if (j == 0)
                dp[i][j] = i;
            else if (x[i-1] != y[j-1])
                dp[i][j] = 1 + min(dp[i-1][j], dp[i][j-1], dp[i-1][j-1]);
            else
                dp[i][j] = dp[i-1][j-1];

        }
    }
    cout << dp[n][m] << "\n";

    vector<char>
    vector<pair<char, pair<int, char>>> res;
    int i = n, j = m;
    while (i >= 0 && j >= 0) {
        if (x[i-1] == y[j-1]) {
            i--; j--;
        }
        else if (dp[i][j] == dp[i-1][j] + 1) {
            res.first.push_back('D');
            res.second.push_back(make_pair(i-dp[i-1][j], '0'));
            i--;
        }
        else if (dp[i][j] == dp[i-1][j-1] + 1) {
            res.first.push_back('R');
            res.second.push_back(make_pair(j, y[j-1]));
            i--; j--;
        }
        else if (dp[i][j] == dp[i][j-1] + 1) {
            res.first.push_back('I');
            res.second.push_back(make_pair(j, y[j-1]));
            j--;
        }
    }
    return 0;
}
