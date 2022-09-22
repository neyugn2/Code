#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define endl "\n"

using namespace std;

int n;
string s;

void solve() {
    cin >> n >> s;
    int anton = 0, danik = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A')
            anton++;
        else
            danik++;
    }
    if (anton > danik)
        cout << "Anton\n";
    if (danik > anton)
        cout << "Danik\n";
    if (danik == anton)
        cout << "Friendship\n";
}

int32_t main() {
    fast();
    solve();
    return 0;
}

