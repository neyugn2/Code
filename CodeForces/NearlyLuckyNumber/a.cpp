#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define endl "\n"

using namespace std;

string s;

int check(string a) {
    int i = 0;
    while (1) {
        if (a[i] == '\0')
            break;
        if (a[i] != '4' && a[i] != '7')
            return 0;
        i++;
    }
    return 1;
}

void solve() {
    int num = 0;
    int i = 0;
    cin >> s;
    while (1) {
        if (s[i] == '\0')
            break;
        if (s[i] == '4' || s[i] == '7')
            num++;
        i++;
    }
    string str = to_string(num);
    if (check(str) == 0)
        cout << "NO\n";
    else
        cout << "YES\n";
}

int32_t main() {
    fast();
    solve();
    return 0;
}

