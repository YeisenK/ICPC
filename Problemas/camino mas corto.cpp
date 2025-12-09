#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    vector<vector<int>> laberintillo(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> laberintillo[i][j];

    if (laberintillo[0][0] == 1 || laberintillo[n-1][m-1] == 1) {
        cout << -1;
        return 0;
    }

    vector<vector<int>> dist(n, vector<int>(m, -1));
    queue<pair<int,int>> que;

    que.push({0,0});
    dist[0][0] = 0;

    int dr[4] = {0, 0, 1, -1};
    int dc[4] = {1, -1, 0, 0};

    while (!que.empty()) {
        auto [r,c] = que.front(); 
        que.pop();

        if (r == n-1 && c == m-1) {
            cout << dist[r][c];
            return 0;
        }

        for (int i = 0; i < 4; i++) {
            for (int step = 1; step <= k; step++) {
                int nr = r + dr[i] * step;
                int nc = c + dc[i] * step;

                if (nr < 0 || nr >= n || nc < 0 || nc >= m) break;
                if (laberintillo[nr][nc] == 1) break;

                if (dist[nr][nc] == -1) {
                    dist[nr][nc] = dist[r][c] + 1;
                    que.push({nr, nc});
                }
            }
        }
    }

    cout << -1;
    return 0;
}
