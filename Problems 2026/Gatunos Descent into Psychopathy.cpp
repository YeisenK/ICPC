//CodeForces
#include <cmath>
#include <iostream>
using namespace std;


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t>0){
        long double b,h1,h2;
        cin >> h1 >> h2 >> b;
        cout << (long long)ceill(logl(h1 / h2) / log1p(1.0 / (b - 1.0))) << "\n";
        t--;
    }
}

/*
 * G. Gatuno's Descent into Psychopathy
 *
 * The once-kind feline Gatuno is a very good and heart-guided person.
 * As every good person, his goodness can be measured. He carries a heart
 * of size H1. Unfortunately, now he seeks to shed his humanity. His twisted
 * goal: reduce his heart to size H2 or smaller through a horrifying ritual
 * — biting innocent dogs.
 *
 * Each bite comes at a terrible cost to his remaining conscience, but makes
 * subsequent bites easier in his dark transformation...
 *
 * After biting n dogs, the rule of shrinking heart is:
 *
 * - Hn = H1 × ((B - 1) / B)^n
 *   Therefore, each subsequent bite requires 1/B of the previous emotional pain.
 *
 * Objective:
 * Find the minimum number of dogs Gatuno must bite so that Hn ≤ H2.
 *
 * Input:
 * - Multiple test cases.
 * - First line: integer T (1 ≤ T ≤ 100000)
 * - Next T lines: three integers per test case:
 *     H1: Initial heart size (1 < H1 ≤ 10^12)
 *     H2: Target heart size (0 < H2 < H1)
 *     B : Brutality factor (2 ≤ B ≤ 2 × 10^5)
 *
 * Output:
 * - For each test case, print a single integer:
 *   the minimum number of bites required.
 *
 * Examples:
 * Input:
 * 3
 * 100 50 2
 * 1000 1 10
 * 1000 100 10
 *
 * Output:
 * 1
 * 66
 * 22
 */