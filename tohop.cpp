#include <bits/stdc++.h>

using namespace std;

int n, k, a[21];

void backTrack(int i) {
    for (int j = a[i-1]+1; j <= n-k+i; j++) {
        a[i] = j;
        if (i == k) {
            for (int l = 1; l <= k; l++)
                cout << a[l] << " ";
            cout << "\n";
        } else backTrack(i+1);
    }
}

int main() {
    freopen("tohop.inp", "r", stdin);
    freopen("tohop.out", "w", stdout);
    cin >> n >> k;
    backTrack(1);
    return 0;
}
