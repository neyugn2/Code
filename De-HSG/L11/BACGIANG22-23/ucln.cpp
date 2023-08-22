#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    freopen("ucln.inp", "r", stdin);
    freopen("ucln.out", "w", stdout);

    long long a, b;
    cin >> a >> b;

    cout << __gcd(a, b) << "\n";
    return 0;
}
