#include <iostream>
using namespace std;
int main()
{

    string num;
    int count = 0;
    cin >> num;

    int length = num.length();
    for (int i = 0; i < length; i++)
    {

        if (num[i] == '1')
        {

            count++;
        }
    }

    cout << count << endl;

    return 0;
}