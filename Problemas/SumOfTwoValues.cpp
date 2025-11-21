#include <bits/stdc++.h>
using namespace std;
unordered_map<int, pair<long, long>> memo;
vector<long long> vec;

void sumOfTwo(long long x){
    for(int i = 0; i < x; ++i){
        if(memo[i].second >= 0){
        auto it = find(vec.begin(), vec.end(), memo[i].second);
            if(it != vec.end()){
                cout << i + 1 << distance(vec.begin(), it); 
                return;  
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
    return;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long x, n, temp;
    cin >> n >> x;
    
    for(int i; i < x; ++i){
        cin >> temp;
        memo[i] = make_pair(temp,x-temp);
        vec.push_back(temp);
    }

   sumOfTwo(x);

    return 0;
}