#include <bits/stdc++.h>

using namespace std;

void print(int n, int a[]) {
    for (int i = 0; i < n; i++)
        cout << a[i];
    cout << "\n";
}

void backtrack(int n, int i, int a[], int k) {
    if (i == n) {
        print(n, a);
        return;
    }
    for (int j = 0; j < k; j++) {
        a[i] = j;
        backtrack(n, i+1, a, k);
    }
}

int main() {
    freopen("kphan.inp", "r", stdin);
    freopen("kphan.out", "w", stdout);
    int n, k; cin >> n >> k;
    int a[n+1];
    backtrack(n, 0, a, k);
    return 0;
}

