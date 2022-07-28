#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//#define int long long
#define endl "\n"

using namespace std;

char a[105], b[105];

void toLower(char* a, char* b) {
    int flag = -1;
    while (*a) {
        *a = tolower(*a);
        *b = tolower(*b);
        if (*a < *b) {
            flag = 0;
            break;
        } else if (*a > *b) {
            flag = 1;
            break;
        }
        *b++;
        *a++;
    }
    if (flag == 0)
        cout << "-1\n";
    else if (flag == 1)
        cout << "1\n";
    else
        cout << "0\n";
}

void solve() {
    cin >> a >> b;
    toLower(a, b);
}

int32_t main() {
    fast();
    solve();
    return 0;
}

