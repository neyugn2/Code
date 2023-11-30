#include <bits/stdc++.h>

using namespace std;
bool check[11] = {0};
void backTrack(int n, int a[], int i) {
    for (int j = 1; j <= n; j++) {
        if (check[j] == 0) {
            check[j] = 1;
            a[i] = j;
            if (i == n) {
                for (int k = 1; k <= n; k++)
                    cout << a[k] << " ";
                cout << "\n";
            }
            else
                backTrack(n, a, i+1);
            check[j] = 0;
        }

    }
}

int main() {
    freopen("hoanvi.inp", "r", stdin);
    freopen("hoanvi.out", "w", stdout);
    int n; cin >> n;
    int a[n+1];
    backTrack(n, a, 1);
    return 0;
}
