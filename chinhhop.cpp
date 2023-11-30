#include <bits/stdc++.h>

using namespace std;

bool check[11] = {0};

void backTrack(int n, int k, int a[], int i) {
    for (int j = 1; j <= n; j++) {
        if (check[j] == 0) {
            check[j] = 1;
            a[i] = j;
            if (i == k) {
                for (int l = 1; l <= k; l++)
                    cout << a[l] << " ";
                cout << "\n";
            } else backTrack(n, k, a, i+1);
            check[j] = 0;
        }
    }
}

int main() {
    freopen("chinhhop.inp", "r", stdin);
    freopen("chinhhop.out", "w", stdout);
    int n, k; cin >> n >> k;
    int a[k+1];
    backTrack(n, k, a, 1);
    return 0;
}
