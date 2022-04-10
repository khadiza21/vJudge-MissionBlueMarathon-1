#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3, divisor;
    cin >> num1 >> num2 >> num3;
    for (int i = num1; i <= num2; i++)
    {
        if (num3 % i == 0)
        {
            divisor++;
        }
    }
    cout << divisor << endl;
}
