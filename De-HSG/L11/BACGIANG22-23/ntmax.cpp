#include <bits/stdc++.h>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    freopen("ntmax.cpp", "r", stdin);
    freopen("ntmax.out", "w", stdout);

    const int n = 5E6;
    string s; cin >> s;
    vector<bool> sieve(n + 1, true);
    sieve[0] = sieve[1] = false;
    int count = 0;
    string num;
    int largestPrime = 0;
    stringstream ss;
    int tmp = 0;

    for (int i = 2; i * i <= n; i++)
        if (sieve[i])
            for (int j = i * i; j <= n; j += i)
                sieve[j] = false;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 48 && s[i] <= 57) {
            count++;
            num.push_back(s[i]);
        } else {
            ss << num; ss >> tmp;
            if (sieve[tmp]) 
                largestPrime = max(largestPrime, tmp);
            num.clear();
            tmp = 0;
        }
    }

    if (num != "") {
        tmp = stoi(num);
        if (sieve[tmp]) 
            largestPrime = max(largestPrime, tmp);
    }

    cout << count << "\n";
    cout << largestPrime << "\n";
    return 0;
}
