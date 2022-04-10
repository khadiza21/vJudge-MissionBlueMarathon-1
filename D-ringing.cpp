#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + 3);

    
    cout << arr[0]+arr[1] << endl;

    return 0;
}