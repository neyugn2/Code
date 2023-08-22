#include <bits/stdc++.h>

using namespace std;

int calc(int x) {
    string s = to_string(x);
    int sum = 0;
    for (int i = 0; i < s.length(); i++)
        sum += int(s[i]) - 48;
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    freopen("docao.inp", "r", stdin);
    freopen("docao.out", "w", stdout);

    int n, h; cin >> n >> h;
    vector<bool> sieve(n + 5, true);
    sieve[0] = sieve[1] = false;
    int count = 0;

    for (int i = 2; i * i <= n; i++)
        if (sieve[i])
            for (int j = i * i; j <= n; j += i)
                sieve[j] = false;
    
    for (int i = 2; i <= n; i++) {
        if (sieve[i] && calc(i) == h) {
            cout << i << "\n";
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}
