#include <iostream>
using namespace std;
int main()
{

    int input[10000], sum = 0, count = 1;
    int dataSet = end(input) - begin(input);

    for (int i = 0; i < dataSet; i++)
    {

        cin >> input[i];
        if (input[i] == 0)
        {
            break;
        }
    }

    for (int i = 0; i <= dataSet; i++)
    {
        if (input[i] == 0)
        {
            break;
        }
        cout << "Case " << count << ": " << input[i] << endl;
        count++;
    }

    return 0;
}