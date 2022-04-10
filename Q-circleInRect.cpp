#include <bits/stdc++.h>
using namespace std;

int main()
{
    int W, H, x, y, r;
    cin >> W >> H >> x >> y >> r;

    if (r <= W - x && r <= H - y && r <= x && r <= y)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}