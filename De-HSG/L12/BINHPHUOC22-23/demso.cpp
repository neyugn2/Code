#include <bits/stdc++.h>
#include <ios>
#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    freopen("demso.inp" ,"r", stdin);
    freopen("demso.out", "w", stdout);

    long long a, b, c;
    cin >> a >> b >> c;
    long long ans = (b - a + 1) - (b - a + 1) / c;

    cout << ans << "\n";
    return 0;
}
