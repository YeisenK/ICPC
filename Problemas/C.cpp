#include <bits/stdc++.h>
using namespace std;

bool pass(vector<bool>& ecuation, vector<bool>& binary) {
    int sz = ecuation.size();
    if (ecuation[0] != 1) {
        return false;
    }
    for (int i = 1; i < sz; i++) {
        if (ecuation[i] != 0) {
            return false;
        }
    }
    return true;
}


void print(vector<bool>& ecuation) {
    int sz = ecuation.size();
    for (int i = sz - 1; i >= 0; i--) {
        cout << ecuation[i] << " ";
    }
    cout << endl;
}



int collatz(vector<bool>& ecuation, vector<bool>& binary) {
    int sz = ecuation.size() - 1;
    int cont = 0;
    while(!pass(ecuation,binary)){
        vector<bool> result(sz);
        if(ecuation[0] == 1){
            copy(ecuation.begin(), ecuation.begin() + sz, binary.begin() + 1);
            transform(binary.begin(), binary.begin() + sz, ecuation.begin(), result.begin(), bit_xor<bool>());
            copy(result.begin() + 1, result.begin() + sz , ecuation.begin());
            cont++;
        }else{
            rotate(ecuation.begin(), ecuation.begin() + 1, ecuation.end());
            ecuation[sz] = 0;
        }
        cont++;
    }
    return cont;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    n++;
    vector<bool> ecuation(n+1, 0);
    vector<bool> binary(n+1, 0);
    for(int i = n-1; i >= 0; i--) {
        int x;
        cin >> x;
        ecuation[i] = (x != 0);
    }
    cout << collatz(ecuation, binary) << endl;
    
    return 0;
}
 