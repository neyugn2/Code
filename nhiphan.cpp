#include <bits/stdc++.h>

using namespace std;

void print(int n, int a[]) {
    for (int i = 0; i < n; i++)
        cout << a[i];
    cout << "\n";
}

void backtrack(int n, int i, int a[]) {
    if (i == n) {
        print(n, a);
        return;
    }
    a[i] = 0;
    backtrack(n, i+1, a);
    a[i] = 1;
    backtrack(n, i+1, a);
}

int main() {
    freopen("nhiphan.inp", "r", stdin);
    freopen("nhiphan.out", "w", stdout);
    int n; cin >> n;
    int a[n+1];
    backtrack(n, 0, a);
    return 0;
}
