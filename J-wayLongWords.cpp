#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string words[n];
    for (int i = 0; i < n; i++)
    {
        cin >> words[i];
    }
    for (int i = 0; i < n; i++)
    {
        int length = words[i].length();
        if (length <= 10)
        {
            cout << words[i] << endl;
        }
        else
        {
            int shortLength = length - 2;
            int lastIndex = length - 1;
            cout << words[i][0] << shortLength << words[i][lastIndex] << endl;
        }
    }
}
