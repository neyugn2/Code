#include <bits/stdc++.h>

using namespace std;

int n;
int row[13], firDiag[13], secDiag[13];
vector<int> res;

void backTrack(int i) {
    for (int j = 1; j <= n; j++) {
        if (!row[j] && !firDiag[i-j+n] && !secDiag[i+j-1]) {
            row[j] = firDiag[i-j+n] = secDiag[i+j-1] = 1;
            res.push_back(j);
            if (i == n) {
                for (int i = 0; i < res.size(); i++)
                    cout << res[i] << " ";
                cout << "\n";
            }
            else backTrack(i+1);
            row[j] = firDiag[i-j+n] = secDiag[i+j-1] = 0;
            res.pop_back();
        }
    }
}

int main() {
    freopen("queen.inp", "r", stdin);
    freopen("queen.out", "w", stdout);
    cin >> n;
    backTrack(1);
    return 0;
}
