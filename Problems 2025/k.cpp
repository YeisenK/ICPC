#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long oldCoins, myCoins;
    cin >> oldCoins >> myCoins;

    if(myCoins > oldCoins) cout << oldCoins + 1 << endl;
    else if(myCoins == oldCoins) cout << myCoins << endl;
    else if(myCoins < oldCoins) cout << 0 << endl;


    return 0;
}