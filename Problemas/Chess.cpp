#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int n;
vector<vector<char>> seen;

int tiles(char c, int c1, int c2){
    auto mark = [&](int x, int y)->int{
        if (x>=1 && x<=n && y>=1 && y<=n && !seen[x][y]) {
            seen[x][y] = 1;
            return 1;
        }
        return 0;
    };

    int add = 0;

    add += mark(c1, c2);

    if (c == 'R' || c == 'Q') {
        for (int j = 1; j <= n; ++j) add += mark(c1, j);
        for (int i = 1; i <= n; ++i) add += mark(i, c2);
    }
    if (c == 'Q') {
        for (int k = 1; c1-k >= 1 && c2-k >= 1; ++k) add += mark(c1-k, c2-k);
        for (int k = 1; c1-k >= 1 && c2+k <= n; ++k) add += mark(c1-k, c2+k);
        for (int k = 1; c1+k <= n && c2-k >= 1; ++k) add += mark(c1+k, c2-k);
        for (int k = 1; c1+k <= n && c2+k <= n; ++k) add += mark(c1+k, c2+k);
    }
    if (c == 'N') {
        int d[8][2] = {
            {2,1},{2,-1},{-2,1},{-2,-1},{1,2},{1,-2},{-1,2},{-1,-2}
        };
        for (int i = 0; i < 8; ++i) add += mark(c1 + d[i][0], c2 + d[i][1]);
    }

    return add;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, c1, c2, r = 0;
    cin >> n >> m;

    seen.assign(n+1, vector<char>(n+1, 0));

    for (int i = 0; i < m; i++) {
        char c;
        cin >> c >> c1 >> c2;
        r += tiles(c, c1, c2);
    }
    cout << r << "\n";
    return 0;
}
