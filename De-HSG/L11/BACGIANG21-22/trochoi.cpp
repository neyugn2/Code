#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    freopen("trochoi.inp", "r", stdin);
//    freopen("trochoi.out", "w", stdout);

    int n; cin >> n;
    int a[n+1], b[n+1];
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];
    sort(a, a + n + 1); sort(b, b + n + 1);
    int i = 1, j = n;
    int minVal = 2000000000;

    while (i <= n && j >= 1) {
        minVal = min(minVal, abs(a[i] + b[j]));
        if (minVal == 0) break;
        if (a[i] + b[j] < 0) i++;
        else j--;
    }
    
    cout << minVal << "\n";
    return 0;
}
