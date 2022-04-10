#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, m, s = 0, a[100];
    cin >> num >> m;
    for (int i = 0; i < num; i++)
    {
        cin >> a[i];
    }
    sort(a, a + num);
    for (int i = 0; i < m && a[i] < 0; i++)
    {
        s += a[i];
    }
    cout << abs(s) << endl;
}