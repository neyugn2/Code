#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define endl "\n"

using namespace std;

int n, numberchar;
char a[105];

int charsInArray(char* array){
    while (*array++)
        numberchar++;
    return numberchar;
}

void solve() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        numberchar = 0;
        cin >> a;
        if (charsInArray(a) > 10)
            cout << a[0] << numberchar-2 << a[numberchar-1] << endl;
        else
            cout << a << endl;
    }
}

int32_t main() {
    fast();
    solve();
    return 0;
}

