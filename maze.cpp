#include <bits/stdc++.h>

using namespace std;

int m, n, u, v;
int maze[16][16], check[16][16];
vector<pair<int, int>> pos;
int minDist = INT_MAX;
vector<pair<int, int>> res;

void backTrack(int i, int j) {
    if (i == 1 || i == m || j == 1 || j == n) {
        if (minDist >= pos.size()) {
            res.clear();
            minDist = pos.size();
            for (int k = 0; k < pos.size(); k++)
                res.push_back(make_pair(pos[k].first, pos[k].second));
        }
        return;
    }
    check[i][j] = 1;
    if (maze[i-1][j-1] == 0 && check[i-1][j-1] == 0) {
        pos.push_back(make_pair(i-1, j-1));
        check[i-1][j-1] = 1;
        backTrack(i-1, j-1);
        check[i-1][j-1] = 0;
        pos.pop_back();
    }
    if (maze[i-1][j] == 0 && check[i-1][j] == 0) {
        pos.push_back(make_pair(i-1, j));
        check[i-1][j] = 1;
        backTrack(i-1, j);
        check[i-1][j] = 0;
        pos.pop_back();
    }
    if (maze[i-1][j+1] == 0 && check[i-1][j+1] == 0) {
        pos.push_back(make_pair(i-1, j+1));
        check[i-1][j+1] = 1;
        backTrack(i-1, j+1);
        check[i-1][j+1] = 0;
        pos.pop_back();
    }
    if (maze[i][j-1] == 0 && check[i][j-1] == 0) {
        pos.push_back(make_pair(i, j-1));
        check[i][j-1] = 1;
        backTrack(i, j-1);
        check[i][j-1] = 0;
        pos.pop_back();
    }
    if (maze[i][j+1] == 0 && check[i][j+1] == 0) {
        pos.push_back(make_pair(i, j+1));
        check[i][j+1] = 1;
        backTrack(i, j+1);
        check[i][j+1] = 0;
        pos.pop_back();
    }
    if (maze[i+1][j-1] == 0 && check[i+1][j-1] == 0) {
        pos.push_back(make_pair(i+1, j-1));
        check[i+1][j-1] = 1;
        backTrack(i+1, j-1);
        check[i+1][j-1] = 0;
        pos.pop_back();
    }
    if (maze[i+1][j] == 0 && check[i+1][j] == 0) {
        pos.push_back(make_pair(i+1, j));
        check[i+1][j] = 1;
        backTrack(i+1, j);
        check[i+1][j] = 0;
        pos.pop_back();
    }
    if (maze[i+1][j+1] == 0 && check[i+1][j+1] == 0) {
        pos.push_back(make_pair(i+1, j+1));
        check[i+1][j+1] = 1;
        backTrack(i+1, j+1);
        check[i+1][j+1] = 0;
        pos.pop_back();
    }
    pos.pop_back();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    freopen("maze.inp", "r", stdin);
    freopen("maze.out", "w", stdout);
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
        for (int j = 1; j <= n; j++)
            cin >> maze[i][j];
    cin >> u >> v;
    backTrack(u, v);

    if (res.size() != 0) {
        cout << minDist << "\n";
        for (int i = 0; i < res.size(); i++)
            cout << res[i].first << " " << res[i].second << "\n";\
    }
    else
        cout << -1 << "\n";
    return 0;
}
