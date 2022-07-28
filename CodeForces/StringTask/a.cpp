#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
#define endl "\n"

using namespace std;

char a[105], b[105];

int checkVowels(char a) {
    if (a == 'a' || a == 'A' || a == 'i' || a == 'I' || a == 'u' || a == 'U' || a == 'e' || a == 'E' || a == 'o' || a == 'O' || a == 'y' || a == 'Y')
        return 1;
    else
        return 0;
}

void toLower(char* a) {
    while (*a) {
        *a = tolower(*a);
        cout << "." << *a;
        *a++;
    }
}

void solution(char* a, char* b) {
    while (*a) {
        if (checkVowels(*a) == 0) {
            *b = *a;
            *b++;
        }
        *a++;
    }
}


void solve() {
    cin >> a;
    solution(a, b);
    toLower(b);
}

int32_t main() {
    fast();
    solve();
    return 0;
}

