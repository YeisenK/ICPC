#include <bits/stdc++.h>
using namespace std;

void solve(){
    int k;
    string s;
    cin >> k >> s;
    int n = s.length();

    // flipear
    vector<array<int,2>> pre(n);
    for(int i = 0; i < n; i++){
        for(int c = 0; c < 2; c++){
            pre[i][c] = (i ? pre[i-1][c] : 0) + (s[i] - '0' != c); // calcular el costo de convertur a c (c es el caracter objeti ya sea 0 o 1)
        }
    }
    auto cost = [&](int l, int r, int c) -> int {
        return pre[r][c] - (l ? pre[l-1][c] : 0);
    };

    // f[i][c] = min flips for s[0..i] kool con s[i]=c
    // from[i][c] = empiza j
    const int INF = 1e9;
    vector<array<int,2>> f(n), fr(n);

    // val(j, c) = f[j-1][1-c] - pre[j-1][c]
    // f[i][c] = pre[i][c] + min sobre j en [i-k+2, i] de val(j, c)

    deque<int> dq[2];

    auto val = [&](int j, int c) -> int {
        if(j == 0) return 0; // f[-1][1-c]=0, pre[-1][c]=0
        return f[j-1][1-c] - pre[j-1][c];
    };
    //sliding window
    for(int i = 0; i < n; i++){
        for(int c = 0; c < 2; c++){
            // adñadir j = i a dequeuque para c
            while(!dq[c].empty() && val(dq[c].back(), c) >= val(i, c))
                dq[c].pop_back();
            dq[c].push_back(i);
            // remover de la ventana (j < i - k + 2)
            while(!dq[c].empty() && dq[c].front() < i - k + 2)
                dq[c].pop_front();

            f[i][c] = pre[i][c] + val(dq[c].front(), c);
            fr[i][c] = dq[c].front();
        }
    }

    int c = (f[n-1][0] <= f[n-1][1]) ? 0 : 1;
    cout << f[n-1][c] << " ";

    string res(n, '?');
    int i = n - 1;
    while(i >= 0){
        int j = fr[i][c];
        for(int m = j; m <= i; m++) res[m] = '0' + c;
        i = j - 1;
        c = 1 - c;
    }
    cout << res << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
/*
 * K. Kool Strings
 *
 * Dado un entero K y una cadena binaria S, se define que una cadena es "kool"
 * si no contiene K o más caracteres consecutivos iguales.
 *
 * Puedes realizar la siguiente operación cualquier número de veces:
 * - Elegir un índice i y cambiar S[i] de '0' a '1' o de '1' a '0'.
 *
 * Objetivo:
 * Transformar S en una cadena "kool" usando el mínimo número de operaciones.
 *
 * Entrada:
 * - Un entero K y una cadena binaria S.
 * - Restricciones: 2 ≤ K ≤ |S| ≤ 100000
 *
 * Salida:
 * - Un entero: el mínimo número de operaciones necesarias.
 * - Una cadena resultante que sea "kool" después de aplicar esas operaciones.
 * - Si hay múltiples respuestas válidas, se puede imprimir cualquiera.
 *
 * Ejemplos:
 * Entrada: 2 00
 * Salida: 1 01
 *
 * Entrada: 2 10
 * Salida: 0 10
 *
 * Entrada: 3 1111100
 * Salida: 1 1101100
 *
 * Entrada: 3 00001111
 * Salida: 2 01001101
 */