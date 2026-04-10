//Codeforces
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve() {
    int n, c = 0;
    ll r = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
        r += a[i];
    }
    int sz = a.size();
    while (r%sz != 0){
      sz--;
      c++;
    }
        cout << c << endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}

/*
 * A. Archmage's Crystals
 *
 * In the high halls of Numeria, an archmage tends n magic crystals
 * with powers a1, a2, ..., an. With a fusion spell, he may pick
 * any two crystals with powers x and y, remove them, and create
 * a single crystal with power x + y. Each spell reduces the number
 * of crystals by 1.
 *
 * The archmage seeks harmony: he wants the average power of the
 * crystals to become an integer.
 *
 * Objective:
 * Determine the minimum number of spells needed to achieve this.
 *
 * Input:
 * - An integer n (1 ≤ n ≤ 1,000,000)
 * - A list of n integers a1, a2, ..., an (1 ≤ ai ≤ 1000)
 *
 * Output:
 * - A single integer: the minimum number of spells.
 *
 * Examples:
 * Input:
 * 4
 * 5 2 3 5
 * Output:
 * 1
 *
 * Input:
 * 5
 * 11 12 13 14 15
 * Output:
 * 0
 *
 * Input:
 * 4
 * 1 5 3 7
 * Output:
 * 0
 *
 * Note:
 * A string U is called a subsequence of a string V if U can be obtained
 * from V by deleting zero or more characters without changing the
 * relative order of the remaining characters.
 */