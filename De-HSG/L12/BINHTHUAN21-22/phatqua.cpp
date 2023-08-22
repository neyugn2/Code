#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    freopen("phatqua.inp", "r", stdin);
    freopen("phatqua.out", "w", stdout);

    int a, b; cin >> a >> b;
    int c = __gcd(a, b);
    int count = 0;

    for (int i = 1; i * i <= c; i++) {
        if (c % i == 0) {
            count += 2;
            if (c / i == i) count--;
        }
    }

    cout << count << "\n";
    return 0;
}
