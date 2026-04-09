//Codeforces
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
// const int MOD = 1e9+7;
// const ll INF = 1e18;

void solve() {
    int k, n;
    cin >> k >> n;

    int min_k = (n + 2) / 3; // Esto es para evitar espacios mayores a 3 entre los baños
    int max_k = (n + 1) / 2; // Esto es lo contrario, es para evitar que no quede 'X' juntas
    
    if(k < min_k || k > max_k){
        cout << "*" << endl;
        return;
    }
    
    string res(n, '-');
    // l  +  K  +  2a  +  b  +  r  =  N
    // a + b = K - 1
    // a = N - 2K + 1 - l - r
    // b =1 (K-1) - a
    for(int l = 0; l <= 1; l++){ //l es left y representa la esquina izquierda, que solo puede ser 'X' o "-X"
        for(int r = 0; r <= 1; r++){ // lo mismo con la derecha (arriba España).
            int a = n - (2*k) +1 - l -r;
            int b = (k-1) - a;
            if(a >= 0 && b >= 0){ 
                int pos = l;
                int gaps2 = a;
                for(int i = 0; i < k; i++){
                    res[pos] =  'X';
                    if(i < k -1){
                        pos += (gaps2 > 0)? 3 : 2;
                        if(gaps2 > 0)
                            gaps2--;
                    }
                }
                cout << res << endl;
                return;
            }
        }
    }
    return;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}

/*
 * Problem Description:
 *
 * You surely agree that the best place to use a restroom is at home. However,
 * sometimes people have no choice but to use a public restroom, where toilets
 * are arranged side by side in a single row.
 *
 * To maintain privacy, each person will choose an unoccupied toilet such that
 * none of its adjacent toilets (left or right) are occupied.
 *
 * There are N toilets in a row, all initially unoccupied, and K people arrive
 * one by one. Each person selects a valid toilet (with no occupied neighbors),
 * and it becomes occupied immediately.
 *
 * Your task is to determine whether it is possible for all K people to choose
 * toilets following this rule, such that after they are seated, there is NO
 * additional toilet available that satisfies the same privacy condition.
 *
 * In other words:
 * - Place K people in the toilets (mark with 'X')
 * - Remaining toilets are marked with '-'
 * - No two 'X' are adjacent
 * - After placing K people, there must NOT exist any '-' position where a new
 *   person could sit without violating the adjacency rule
 *
 * Input:
 *   A single line with two integers:
 *     K (number of people)
 *     N (number of toilets)
 *   Constraints: 1 ≤ K ≤ N ≤ 1e6
 *
 * Output:
 *   - If possible, print a string of length N:
 *       'X' → occupied toilet
 *       '-' → empty toilet
 *   - The configuration must ensure:
 *       1. Exactly K 'X'
 *       2. No two 'X' are adjacent
 *       3. No additional valid position remains for another person
 *   - If multiple solutions exist, print any
 *   - If impossible, print a single '*'
 */