#include <bits/stdc++.h>
using namespace std;


int remo(int x) {
    vector<int> vec(x + 1, INT_MAX);
    vec[0] = 0;
    for (int i = 1; i <= x; ++i) {
        int temp = i;
        while (temp > 0) {
            int digit = temp % 10;
            temp /= 10;
            if (digit > 0) {
                vec[i] = min(vec[i], vec[i - digit] + 1);
            }
        }
    }
    return vec[x];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, t;
    cin >> x;
    cout << remo(x) << endl;

    return 0;
}