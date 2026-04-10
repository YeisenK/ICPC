//Codeforces
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n;
    // Leemos hasta EOF por si el juez manda múltiples casos
    while (scanf("%d %d", &t, &n) == 2) {
        vector<pair<int, int>> HnX(n); // Guardamos X y H como enteros para que el sort sea más rápido
        for (int i = 0; i < n; i++) {
            scanf("%d %d", &HnX[i].first, &HnX[i].second);
        }
        sort(HnX.begin(), HnX.end()); // Ordenamos por posición X
        const double PI = acos(-1.0);
        // cot(θ) = cos(θ)/sin(θ) = 1/tan(θ), longitud de sombra = H * cot(θ)
        const double cot = cos(t * PI / 180.0) / sin(t * PI / 180.0);
        double r = 0, rightmost = 0; // rightmost rastrea hasta dónde llega la unión de sombras
        for (int i = 0; i < n; i++) {
            double end = HnX[i].first + HnX[i].second * cot; // Fin de la sombra del sujeto i
            // Solo sumamos si la sombra se extiende más allá de lo ya cubierto
            if (end > rightmost) {
                // max(rightmost, x) maneja ambos casos: sin overlap (x >= rightmost)
                // y overlap parcial (x < rightmost) en una sola expresión
                r += end - max(rightmost, (double)HnX[i].first);
                rightmost = end;
            }
            // Si end <= rightmost, la sombra está completamente cubierta, no sumamos nada
        }
        printf("%.10f\n", r);
    }
    return 0;
}

/*
 * Primera Versión
*int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t, n;
    double r = 0, rigthmost;
    cin >> t >> n;
    vector<pair<double, double>> HnX(n);
    for (int i = 0; i < n; i++) {
        cin >> HnX[i].first >> HnX[i].second;
    }
    sort(HnX.begin(), HnX.end());
    const double tt = tan(t*(PI/180.0)); // Tangente de teta es una constante y hay que convertir angulos a rad
    rigthmost = HnX[0].first;
    for (int i = 0; i < n; i++) {
        double l = HnX[i].second/tt, end = HnX[i].first + l;// Calculamos la longitud
        if (HnX[i].first >= rigthmost){ // No hay superposici�n, sumamos la sombra completa
            r += end - HnX[i].first;
            rigthmost = end;
        }else if (HnX[i].first < rigthmost && end > rigthmost){ // Superposici�n parcial, solo sumamos lo que sobresale
            r+= end - rigthmost;
            rigthmost = end;
        } // Si end <= rigthmost la sombra est� completamente cubierta, no sumamos nada
    }
    cout << fixed << setprecision(10) << r << endl; // para imprimir 5 decimales
    return 0;
}
 * ¿Por qué la versión anterior daba TLE?
 *
 * 1. Lectura hasta EOF: el juez probablemente manda múltiples casos de prueba
 *    pegados en la entrada. La versión anterior solo leía uno y terminaba,
 *    causando que el juez esperara indefinidamente → TLE.
 *
 * 2. cin/cout vs scanf/printf: cout con fixed + setprecision puede ser
 *    significativamente más lento que printf, especialmente con muchas salidas.
 *
 * 3. pair<double,double> vs pair<int,int>: ordenar doubles es más costoso
 *    que ordenar enteros. Como X y H son enteros, no hay razón para guardarlos
 *    como double antes del cálculo.
 */

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