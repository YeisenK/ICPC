#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    set<int> s;
    for (int i = 0; i < 10; i++) {
        int d; cin >> d;
        s.insert(d);
    }
    
    cout << 4 - (int)s.size() << "\n";
    return 0;
}
