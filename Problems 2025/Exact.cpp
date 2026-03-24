#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int a[], int n, int x) {
    int lo = 0;
    int hi = n - 1;
    int steps = 0;
    while (lo <= hi) {
        int mid = (lo + hi) / 2;
        steps++;
        if (a[mid] == x) {
            return steps;
        } else if (a[mid] < x) {       
            lo = mid + 1;
        } else {                       
            hi = mid - 1;
        }
    }
    return -1;
}



int main() {
    int t, n, s;
    cin >> t;

    while(t > 0){
        cin >> n >> s;
        if(s == 1) cout << n/2;

        t--;
    }


    return 0;
}