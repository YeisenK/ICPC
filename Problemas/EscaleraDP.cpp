#include <bits/stdc++.h>
using namespace std;
unordered_map<int, long long> memo;

int f(long long n) {
    if(n == 1) return memo[1] = 1;
    if(n == 2) return memo[2] = 2;
    if (memo.find(n) != memo.end()) return memo[n];
    return memo[n] = f(n-1) + f(n-2);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout << "Formas: " << f(5);
    return 0;
}