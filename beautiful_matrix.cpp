#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6][6];
    int row , column;

    for(int i = 1 ; i < 6 ; i++)
    {
        for(int j = 1; j < 6 ; j++)
        {
            cin >> arr[i][j];

            if(arr[i][j] == 1)
            {
                row = abs(3 - i);
                column = abs(3 - j);
                cout << row + column;
            }

            
        }
    }
    return 0;
}