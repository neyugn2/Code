#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int a;
    vector<int> count(n+5, 0);

    for (int i = 0; i < n; i++) {
        cin >> a;
        count[a]++;
    }

    for (int i = 0; i < count.size(); i++) {
        int j = 0;
        while (j < count[i]) {
            cout << i << " ";
            j++;
        }
    }
    return 0;
}
