#include <bits/stdc++.h>
using namespace std;

constexpr int MOD = 1e9 + 7;

typedef vector<vector<long long>> Mat;

Mat multiply(const Mat& A, const Mat& B, int sz) {
    Mat C(sz, vector<long long>(sz, 0));
    for (int i = 0; i < sz; i++)
        for (int k = 0; k < sz; k++) if (A[i][k])
            for (int j = 0; j < sz; j++)
                C[i][j] = (C[i][j] + A[i][k] * B[k][j]) % MOD;
    return C;
}

Mat matpow(Mat A, long long p, int sz) {
    Mat R(sz, vector<long long>(sz, 0));
    for (int i = 0; i < sz; i++) R[i][i] = 1;
    while (p) {
        if (p & 1) R = multiply(R, A, sz);
        A = multiply(A, A, sz);
        p >>= 1;
    }
    return R;
}

int main(){
    int N, M;
    scanf("%d%d", &N, &M);

    Mat A(M, vector<long long>(M, 0));
    for (int i = 1; i <= M; i++)
        for (int j = 1; j <= M; j++)
            if (__gcd(i, j) == 1)
                A[i-1][j-1] = 1;

    Mat R = matpow(A, N - 1, M);

    long long ans = 0;
    for (int i = 0; i < M; i++)
        for (int j = 0; j < M; j++)
            ans = (ans + R[i][j]) % MOD;

    printf("%lld\n", ans);
}