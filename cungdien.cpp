#include <bits/stdc++.h>

using namespace std;

int n;
int a[13][13];
int row[13], firDiag[13], secDiag[13];
vector<int> res;
int sum = 0, minSum = INT_MAX;

void backTrack(int i) {
    for (int j = 1; j <= n; j++) {
        if (!row[j] && !firDiag[i-j+n] && !secDiag[i+j-1]) {
            sum += a[i][j];
            row[j] = firDiag[i-j+n] = secDiag[i+j-1] = 1;
            res.push_back(j);
            if (i == n) minSum = min(sum, minSum);
            else backTrack(i+1);
            sum -= a[i][j];
            row[j] = firDiag[i-j+n] = secDiag[i+j-1] = 0;
            res.pop_back();
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("cungdien.inp", "r", stdin);
    freopen("cungdien.out", "w", stdout);

    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    backTrack(1);
    cout << minSum << "\n";
    return 0;
}
