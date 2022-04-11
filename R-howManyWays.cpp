#include <iostream>
using namespace std;
int main()
{

    int num1, num2, count ;
    num1 = num2 = 1;
    while (num1 != 0 || num2 != 0)
    {
        count=0;
        cin >> num1 >> num2;
        for (int i = 1; i <= num1; i++)
        {
            for (int j = i + 1; j <= num1; j++)
            {
                for (int k = j + 1; k <= num1; k++)
                {
                    if (j + i + k == num2 && i != j != k)
                    {
                        count++;
                    }
                }
            }
        }

        if (num1 != 0 || num2 != 0)
        {
            cout << count << endl;
        }
    }

    return 0;
}