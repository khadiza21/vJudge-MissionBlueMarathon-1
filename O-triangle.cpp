#include <bits/stdc++.h>
using namespace std;
int main()
{

    int base, edge2, angle;
    double area, circumference, length, x;

    cin >> base >> edge2 >> angle;

    x = angle * 3.14159265359 / 180;

    area = (base * edge2 * sin(x)) / 2;
    circumference = base + edge2 + (sqrt(pow(base, 2) + pow(edge2, 2) - 2 * base * edge2 * cos(x)));
    length = (2 * area) / base;
    cout << fixed << setprecision(8) << area << endl
         << circumference << endl
         << length << endl;

    return 0;
}