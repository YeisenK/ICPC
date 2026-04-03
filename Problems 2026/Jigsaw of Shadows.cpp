//Codeforces
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
// const int MOD = 1e9+7;
// const ll INF = 1e18;

void solve() {

    

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
 * They finally did it! The flat-earthers managed to teleport themselves to
 * an idealized flat world where no one can make fun of them anymore.
 * well you see in a flat world, there is an infinite road along the X-axis. A giant flashlight
 * positioned infinitely far to the west emits parallel light rays at an angle θ
 * (measured clockwise from the ground), illuminating the entire road from the side,
 * like a very low sunrise.
 *
 * There are N people standing at distinct positions along the road, each with a
 * given height H. Since the light hits them from the side at angle θ, each person
 * casts a shadow extending eastward (toward +X). The shadow of a person of height H
 * standing at position X covers the interval:
 *
 *   [X, X + H / tan(θ)]
 *
 * Shadows can overlap: a tall person can completely engulf the shadow of a shorter
 * person standing in front of them, or two adjacent shadows can merge into one.
 * Your task is to compute the total length of road covered by the union of all shadows.
 *
 * Input:
 *   - First line: two integers θ (10 ≤ θ ≤ 80) and N (1 ≤ N ≤ 10^5).
 *     θ is the angle of the light beams in degrees, clockwise from the ground.
 *   - Next N lines: two integers X (0 ≤ X ≤ 3·10^5) and H (1 ≤ H ≤ 1000),
 *     indicating a person of height H standing at position X.
 *     No two people share the same position.
 *
 * Output:
 *   A single number: the total length of road covered by the shadows of all people.
 *   The answer must have an absolute or relative error of at most 10^-4.
 *
 * Example:
 *   θ = 45° → tan(45°) = 1, so each person's shadow length equals their height.
 *   A person at X=0 with H=3 covers [0, 3].
 *   A person at X=1 with H=5 covers [1, 6].
 *   Union: [0, 6] → total length = 6.
 *
 * Key insight:
 *   Generate the interval [X, X + H/tan(θ)] for each person, sort by left endpoint,
 *   then merge overlapping intervals and sum their lengths. O(N log N).
 */