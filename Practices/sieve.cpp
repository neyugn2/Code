#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector<bool> sieve(n + 5, true);
    sieve[0] = sieve[1] = false;

    for (int i = 2; i * i <= n; i++)
        if (sieve[i])
            for (int j = i * i; j <= n; j += i)
                sieve[j] = false;

    for (int i = 2; i <= n; i++)
        if (sieve[i])
            cout << i << endl;
    return 0;
}
