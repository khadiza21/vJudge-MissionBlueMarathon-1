#include <iostream>
using namespace std;

void checkEqual(int num, int sum)
{
    if (num == sum)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

int main()
{
    int a, b, c, sum;
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        sum = b + c;
        checkEqual(a, sum);
    }
    else if (b > a && b > c)
    {
        sum = a + c;
        checkEqual(b, sum);
    }
    else
    {
        sum = a + b;
        checkEqual(c, sum);
    }

    return 0;
}
