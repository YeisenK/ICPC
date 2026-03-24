#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;

cpp_int fastPow(cpp_int base, long long exp) {
    cpp_int r = 1;
    while (exp > 0) {
        if (exp & 1) r *= base;
        base *= base;
        exp >>= 1;
    }
    return r;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string S;
    cin >> S;

    cpp_int X = 0;
    for (char c : S) {
        X *= 10;
        X += (c - '0');
    }

    long double Xld = 0;
    for (char c : S) {
        Xld = Xld * 10 + (c - '0');
    }
    long double lnX = log((long double)Xld);

    vector<long long> ps = {2, 3, 5, 7, 11, 13, 17, 19};

    long double bestErr = 1e100;
    long long bestP = 0, bestE = 0;
    cpp_int bestY;

    for (long long p : ps) {
        long double exact_e = lnX / log((long double)p);
        long long e = llround(exact_e);

        if (e < 1) continue;

        cpp_int Y = fastPow(p, e);

        cpp_int diff = (X > Y ? X - Y : Y - X);

        long double rel = diff.convert_to<long double>()
                        / X.convert_to<long double>();

        if (rel < bestErr) {
            bestErr = rel;
            bestP = p;
            bestE = e;
            bestY = Y;
        }
    }

    cout << 1 << "\n";
    cout << bestP << " " << bestE << "\n";

    return 0;
}
