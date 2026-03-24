#include <bits/stdc++.h>
using namespace std;


int main() {
    int q, a, r, c, n, m, t, temp;
    cin >> n >> m >> q;
    vector<vector<int>> matrix(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a;
            matrix[i][j] = a;
        }
    }
    while(q > 0){
        cin >> t;
        if(t == 1){
            cin >> r;
            r--;
            int mt = m-1;
            for(int j = 0; j < mt; j++){
                if(j<m/2)
                swap(matrix[r][j], matrix[r][mt-j]);
            }
        }else if(t == 2){
            cin >> c;
            c--;
            int nt = n-1;
            for(int i = 0; i < nt; i++){
                if (i<(n/2))
                swap(matrix[i][c], matrix[nt-i][c]);
            }
        }else{
            cin >> r >> c;
            cout << matrix[r-1][c-1] << endl; 
        }

        q--;
    }

    return 0;
}