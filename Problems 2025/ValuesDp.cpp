#include <bits/stdc++.h>
using namespace std;
vector <long long> memo = {-1, -1, -1, -1, -1, -1, -1};
vector <long long> value;

int f(long long n) {
    if(memo[n] != -1) return memo[n];
    if(n == 1) return memo[n] = value[n];
    if(n == 2) return memo[n] = max(value[n],value[n-1]);
    return memo[n] = max((f(n-2)+value[n]), static_cast<long long>(f(n-1)));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    value = {0, 5, 1, 2, 10, 6, 2};
    cout << "Mas grande: " << f(6);
    return 0;
}