#include <iostream>
using namespace std;

int main()
{
    string inputString;
    cin >> inputString;

    if (inputString == "abc" || inputString == "acb" || inputString == "bac" || inputString == "bca" || inputString == "cab" || inputString == "cba")
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}