#include <bits/stdc++.h>

using namespace std;

vector<int> nums;

void backTrack(int i, int n, int base) {
    if (n == 0) {
        cout << base << "=";
        for (int j = 0; j < nums.size()-1; j++)
            cout << nums[j] << "+";
        cout << nums[nums.size()-1] << "\n";
    }
    for (int j = i; j <= n; j++) {
        nums.push_back(j);
        backTrack(j, n-j, base);
        nums.pop_back();
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("phantich.inp", "r", stdin);
    freopen("phantich.out", "w", stdout);
    int n; cin >> n;
    int base = n;
    backTrack(1, n, base);
    return 0;
}
