#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long double days, alc, oth, chanAlc, chanOth;
    cin >> days >> alc >> oth >> chanAlc >> chanOth;
    long double ap = alc - days * chanAlc, op = oth - days * chanOth;
    ap = max(0.0L, ap);
    op = max(0.0L, op);
    cout << fixed << setprecision(10) << 100.0L * (ap / (ap + op)) << '\n';
    return 0;
}
