#include <iostream>
using namespace std;
int main()
{
    string num;
    int countTeamOne = 0, countTeamTwo = 0;
    cin >> num;
    int length = num.length();

    for (int i = 0; i < length; i++)
    {

        if (num[i] == '1')
        {
            countTeamTwo = 0;
            countTeamOne++;
            if (countTeamOne >= 7)
            {
                break;
            }
        }
        else if (num[i] == '0')
        {
            countTeamOne = 0;
            countTeamTwo++;
            if (countTeamTwo >= 7)
            {
                break;
            }
        }
    }

    if (countTeamOne >= 7 || countTeamTwo >= 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
