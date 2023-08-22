#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    freopen("pairpbro.inp", "r", stdin);
    freopen("pairpbro.out", "w", stdout);

    int n, k; cin >> n >> k;
    int count = 0;
    vector<bool> sieve(n + 1, true);
    sieve[0] = sieve[1] = false;

    for (int i = 2; i * i <= n; i++)
        if (sieve[i])
            for (int j = i * i; j <= n; j += i)
                sieve[j] = false;

    for (int i = 2; i <= n; i++)
        if (sieve[i] && sieve[i+k] && i + k <= n) count++;
    cout << count << "\n";
    return 0;
}
