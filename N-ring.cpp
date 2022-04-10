#include <iostream>
using namespace std;
int main()

{

    string firstWord, secondWord;
    int count = 0;
    cin >> firstWord >> secondWord;
    string stringAdd = firstWord + firstWord;
    int i, j, k;
    for (i = 0; stringAdd[i]; i++)
    {
        for (j = i, k = 0; stringAdd[j] == secondWord[k]; j++, k++)
        {
            if (!secondWord[k + 1])
            {
                count = 1;
            }
        }
    }

    if (count == 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
