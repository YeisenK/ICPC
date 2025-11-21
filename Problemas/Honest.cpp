#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    vector<int> num;
    map<int, int> con;

    cin >> n;
    int p = 10 * n;

    for (int i = 0; i < p * 5; i++) {
        cin >> t;
        num.push_back(t);
    }

    for (int f : num) {
        con[f]++;
    }

    bool ok = false;
    bool first = true;
    for (auto& par : con) {
        if (par.second > (n * 2)) {
            if (!first) cout << " ";
            cout << par.first;
            first = false;
            ok = true;
        }
    }

    if (!ok) cout << -1;
    cout << endl;

    return 0;
}
