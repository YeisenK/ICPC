#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> d(n);
    for (int i = 0; i < n; ++i) cin >> d[i];

    int a = d.front() / 3;
    int c = d.back() / 3;

    for (int mid : d) {
        for (int delta = -3; delta <= 3; ++delta) {
            int b = mid / 3 + delta;
            if (b <= a || b >= c) continue;

            vector<int> vals = {a, b, c};
            vector<int> sums;
            for (int i = 0; i < 3; ++i)
                for (int j = 0; j < 3; ++j)
                    for (int k = 0; k < 3; ++k)
                        sums.push_back(vals[i] + vals[j] + vals[k]);

            sort(sums.begin(), sums.end());
            sums.erase(unique(sums.begin(), sums.end()), sums.end());
            if (sums == d) {
                cout << a << " " << b << " " << c << "\n";
                return 0;
            }
        }
    }
}