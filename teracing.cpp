#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("teracing.inp", "r", stdin);
    freopen("teracing.out", "w", stdout);

    int n, k; cin >> n >> k;
    multiset<int> a;
    int tmp;
    for (int i = 1; i <= n; i++) {
        cin >> tmp;
        a.insert(tmp);
    }
    multiset<int> b;
    for (auto i = a.begin(); i != a.end(); i++)
        if (*i > k) b.insert(*i-k);
    int res = 0;
    for (auto i = b.begin(); i != b.end(); i++) {
        if (a.find(*i) != a.end())
            res += a.count(*i);
    }
    cout << res << "\n";
    return 0;
}
