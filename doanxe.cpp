#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("doanxe.inp", "r", stdin);
    freopen("doanxe.out", "w", stdout);

    int n, P, L;
    cin >> n >> P >> L;
    double w[n+1], v[n+1];
    double dp[n+1];
    for (int i = 1; i <= n; i++) {
        cin >> w[i] >> v[i];
        dp[i] = INT_MAX;
    }

    for (int i = 1; i <= n; i++) {
        double minV = INT_MAX, sumW = 0;
        for (int j = i; j > 0; j--) {
            sumW += w[j];
            minV = min(minV, v[j]);
            if (sumW > P) break;
            dp[i] = min(dp[i], dp[j-1] + L/minV);
        }
    }
    cout << setprecision(2) << fixed << dp[n] << "\n";
    return 0;
}
