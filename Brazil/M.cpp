#include <bits/stdc++.h>
using namespace std;

void print(const vector<int>& v) {
    for (int i = 0; i < (int)v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
}



int mini(vector<int> wall,int k, int m){
    m = min(m, (int)wall.size() - 1);
    for (int i = 0; i < k; i++) {
        if (m - i < 0) break;
        int add = k - i;
        if (add <= 0) break;
        wall[m - i] += add;
    }

    return *min_element(wall.begin(), wall.end());
}




int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k,m;
    cin >> n >> k;
    vector<int> wall(n);
    vector<int> height(n);
    for(int i = 0; i < n; i++) cin >> wall[i];
    m = n - 1;                                     
    for (int i = 0; i < n; i++) height[i] = mini(wall, k, m - i);

    sort(height.rbegin(), height.rend());
    print(height);
    cout << height[0] << endl;
    return 0;
}
