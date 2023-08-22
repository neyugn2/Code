#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    freopen("ghh.inp", "r", stdin);
    freopen("ghh.out", "w", stdout);

    int n; cin >> n;
    int a[n+1], maxNum = 0;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        maxNum = max(maxNum, a[i]);
    }

    int sumDiv[maxNum+1] = {0};

    for (int i = 1; i <= maxNum; i++) 
        for (int j = i; j <= maxNum; j += i)
            sumDiv[j] += i;

    for (int i = 1; i <= n; i++) {
        if (sumDiv[a[i]] >= 2 * a[i]) cout << 1 << "\n";
        else cout << 0 << "\n";
    }
    return 0;
}
