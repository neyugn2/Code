#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("lcs.inp", "r", stdin);
    freopen("lcs.out", "w", stdout);

    string a, b;
    cin >> a >> b;
    int m = a.length();
    int n = b.length();
    int dp[n+1][m+1];

    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= m; j++) {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else if (b[i-1] == a[j-1])
                dp[i][j] = dp[i-1][j-1] + 1;
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
    }

    int i = n, j = m;
    string s;
    vector<int> aPos, bPos;
    while (i > 0 && j > 0) {
        if (b[i-1] == a[j-1]) {
            aPos.push_back(j);
            bPos.push_back(i);
            s.push_back(b[i-1]);
            i--; j--;
        } else if (dp[i-1][j] > dp[i][j-1])
            i--;
        else
            j--;
    }
    for (int i = s.length()-1; i >= 0; i--)
        cout << s[i];
    cout << "\n";
    for (int i = aPos.size()-1; i >= 0; i--)
        cout << aPos[i] << " ";
    cout << "\n";
    for (int i = bPos.size()-1; i >= 0; i--)
        cout << bPos[i] << " ";
    cout << "\n";
    return 0;
}
