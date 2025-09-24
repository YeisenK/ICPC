#include <bits/stdc++.h>
using namespace std;
unordered_map<int, long long> memo;

//memoization
//c++ objetc, keys will be arg for fn, value will be the return value

long long fib(long long n) {
    if (memo.find(n) != memo.end()) return memo[n]; //if a value is inside memo return it
    if(n <= 2) return 1;
    memo[n] = fib(n-1)+fib(n-2); // store values in memo and then return it
    return memo[n];
}


int main() {
    cout << "FIBONACCI: "<< fib(500) << endl;

}


/* #include <bits/stdc++.h>
using namespace std;
unordered_map<int, long long> memo;



long long gridTraveler(long long m, long long n) {
    if(m == 1 && n == 1) return 1;
    if(m == 0 || n == 0) return 0;
    return gridTraveler(m-1, n) + gridTraveler(m, n-1);
}


int main() {
    cout << "GRID: "<< gridTraveler(6,3) << endl;
    cout << "GRID: "<< gridTraveler(3,3) << endl;
    cout << "GRID: "<< gridTraveler(2,3) << endl;
    cout << "GRID: "<< gridTraveler(18,18) << endl;


}
    */