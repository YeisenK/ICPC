#include <bits/stdc++.h>
using namespace std;


void addEdge(vector<vector<int>>& adj, int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main() {
    int n, u, v, p, x;
    char c;
    cin >> n;
    vector<vector<int>> adj(n+1);
    for(int i = 0; i < n-1; i++){
        cin >> u >> v;
        addEdge(adj, u, v);
    }
    cin >> p;
    vector<pair<char, int>> neg(p);
    for(int i = 0; i < p; i++){
        cin >> c >> x;
        neg[i].first = c;
        neg[i].second = x;
    }                                                  
    return 0;
}