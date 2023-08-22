#include <iostream>

using namespace std;

bool check(long long x) {
    if (x == 1 || x == 0) return false;
    if (x != 2 && x % 2 == 0) return false;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0) return false;
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    freopen("nguyento.inp", "r", stdin);
    freopen("nguyento.out", "w", stdout);

    long long a; cin >> a;
    long long b = sqrt(a);

    while (check(b) == false)
        b++;

    cout << b * b << "\n";
    return 0;
}
