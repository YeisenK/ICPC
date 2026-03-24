#include <bits/stdc++.h>
using namespace std;

bool pass(vector<char>& ecuation, vector<char>& binary){
    int sz = ecuation.size();
    bool comply = false;
    if(ecuation[0] != 1){
        comply = false;
    }else{
        for(int i = 1; i < sz; i++){
            if(ecuation[i] != 0){ 
                comply = false; 
                break;
            }else {
                comply = true;
            }
        }
    }
    return comply;
}


int collatz(vector<char>& ecuation, vector<char>& binary) {
    int sz = ecuation.size();
    int cont = 0;
    while(!pass(ecuation,binary)){
        vector<char> result(sz);
        if(ecuation[0] == 1){
            // Shift binary right by 1 and set binary[0] = 0
            for (int i = sz - 1; i > 0; --i) binary[i] = ecuation[i - 1];
            binary[0] = 0;
            transform(binary.begin(), binary.end(), ecuation.begin(), result.begin(), bit_xor<char>());
            copy(result.begin(), result.end(), ecuation.begin());
        }else{
            rotate(ecuation.begin(), ecuation.begin() + 1, ecuation.end());
            ecuation[sz - 1] = 0;
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
    vector<char> ecuation(n, 0);
    vector<char> binary(n, 0);
    for(int i = 0; i < n; i++) cin >> ecuation[i];
    cout << "sis" << collatz(ecuation, binary) << endl;
    
    return 0;
}
