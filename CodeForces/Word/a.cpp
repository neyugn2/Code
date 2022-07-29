#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//#define int long long
#define endl "\n"

using namespace std;

char a[105];

void toLower(char* a) {
    while(*a) {
        *a = tolower(*a);
        *a++;
    }
}

void toUpper(char* a) {
    while(*a) {
        *a = toupper(*a);
        *a++;
    }
}

void solve() {
    int lower = 0, upper = 0;
    cin >> a;
    for (int i = 0; i < 105; i++) {
        if (a[i] == '\0')
            break;
        if (int(a[i]) >= 65 && int(a[i]) <= 90)
            upper++;
        else
            lower++;
    }
    if (lower >= upper) {
        toLower(a);
        cout << a << endl;
    } else {
        toUpper(a);
        cout << a << endl;
    }
}

int32_t main() {
    fast();
    solve();
    return 0;
}

