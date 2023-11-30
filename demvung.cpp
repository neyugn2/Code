#include <bits/stdc++.h>

using namespace std;

int m, n;
int board[21][21];
bool prime[100001];

void sievePrime() {
    memset(prime, 1, sizeof(prime));
    prime[0] = prime[1] = 0;
    for (int i = 2; i * i <= 100000; i++) {
        if (prime[i] == 1)
            for (int j = i * i; j <= 100000; j += i)
                prime[j] = 0;
    }
}

void backTrack(int i) {

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("demvung.inp", "r", stdin);
    freopen("demvung.out", "w", stdout);

    cin >> m >> n;
    sievePrime();
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++) {
            cin >> board[i][j];
            if (prime[board[i][j]] == 1)
                board[i][j] = 0;
        }
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++)
            cout << board[i][j] << " ";
        cout << "\n";
    }
    return 0;
}
