#include <iostream>
using namespace std;

int main() {
    int soluciones = 0;
    int checks = 0;

    for (int a = 1; a <= 9; a++)
    for (int b = 1; b <= 9; b++) if (b != a)
    for (int c = 1; c <= 9; c++) if (c != a && c != b)
    for (int d = 1; d <= 9; d++) if (d != a && d != b && d != c)
    for (int e = 1; e <= 9; e++) if (e != a && e != b && e != c && e != d)
    for (int f = 1; f <= 9; f++) if (f != a && f != b && f != c && f != d && f != e)
    for (int g = 1; g <= 9; g++) if (g != a && g != b && g != c && g != d && g != e && g != f)
    for (int h = 1; h <= 9; h++) if (h != a && h != b && h != c && h != d && h != e && h != f && h != g)
    for (int i = 1; i <= 9; i++) if (i != a && i != b && i != c && i != d && i != e && i != f && i != g && i != h) {

        checks++;

        if ((13 * b) % c != 0) continue;
        if ((g * h) % i != 0) continue;

        int result =
            a +
            (13 * b) / c +
            d +
            12 * e -
            f -
            11 +
            (g * h) / i -
            10;

        if (result == 66) {
            soluciones++;
            cout << "Solucion:\n";
            cout << "a=" << a << " b=" << b << " c=" << c
                 << " d=" << d << " e=" << e << " f=" << f
                 << " g=" << g << " h=" << h << " i=" << i << endl;
        }
    }

    cout << "\nTotal de combinaciones probadas: " << checks << endl;
    cout << "Total de soluciones: " << soluciones << endl;

    return 0;
}


