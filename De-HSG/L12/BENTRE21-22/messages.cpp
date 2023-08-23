#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    freopen("messages.inp", "r", stdin);
//    freopen("messages.out", "w", stdout);

    int n, m; cin >> n >> m;
    int a[n+1][m+1];
    int minCost[m+1];
    memset(minCost, 10000, sizeof(minCost));
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
            minCost[j] = min(minCost[j], a[i][j]);
        }
    int packets = 0;

    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (a[i][j] == minCost[j]) {
                
            }
        }
    }
    return 0;
}
