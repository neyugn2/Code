#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//#define int long long
#define endl "\n"

using namespace std;

char a[105];
int b[130];

void distinctChars(char* a) {
    int sum = 0;
    while (*a) {
        b[int(*a)]++;
        *a++;
    }
    for (int i = 0; i < 130; i++) {
        if (b[i] >= 1)
            sum++;
    }
    if (sum % 2 != 0)
        cout << "IGNORE HIM!\n";
    else
        cout << "CHAT WITH HER!\n";
}

void solve() {
    cin >> a;
    distinctChars(a);
}

int32_t main() {
    fast();
    solve();
    return 0;
}

