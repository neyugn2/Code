#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    freopen("sodacbiet.inp", "r", stdin);
    freopen("sodacbiet.out", "w", stdout);

    int a, b; cin >> a >> b;
    long long sumDiv[b+1];
    int count = 0;
    memset(sumDiv, 0, sizeof(sumDiv));

    for (long long i = 1; i <= b; i++) 
        for (long long j = i * i; j <= b; j += i) {
            sumDiv[j] += i;     
            if (i * i != j) sumDiv[j] += j / i;
        }

    for (long long i = a; i <= b; i++)
        if (sumDiv[i] - i > i)
            count++;

    cout << count << "\n";
    return 0;
}
