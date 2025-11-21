#include <bits/stdc++.h>
using namespace std;
unordered_map<int, long long> memo;

long  mod = 1000000007;

int numWays(vector<int> vec, int r){
         

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, r, t;
    cin >> x >> r;
    vector<int> vec(x);
    
    for(int i; i < x; ++i){
        cin >> t;   
        vec[i] = t;
    }

    cout << numWays(vec,r) << endl;

    return 0;
}