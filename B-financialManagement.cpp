#include <iostream>
using namespace std;
int main()
{

    double balance[13], sum = 0;
  

    for (int i = 0; i < 12; i++)
    {

        cin >> balance[i];
    }
    for (int i = 0; i < 12; i++)
    {

        sum += balance[i];
    }
    cout << "$" << (sum / 12) << endl;

    return 0;
}