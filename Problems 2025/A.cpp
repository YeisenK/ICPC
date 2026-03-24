#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    if (!(cin >> N >> M)) return 0;
    
    vector<long long> colMax(M, 0);
    
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            long long x; 
            cin >> x;
            if (x > colMax[j]) colMax[j] = x;
        }
    }
    
    long long total = 0;
    for (int j = 0; j < M; ++j) total += colMax[j];
    
    cout << total << '\n';

    return 0;
}