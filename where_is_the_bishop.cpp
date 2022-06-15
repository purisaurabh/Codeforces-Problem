#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        int y;
        char arr[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> arr[i][j];
            }
        }
        
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (((arr[i + 1][j + 1] == '#') && (arr[i + 1][j - 1] == '#')) && ((arr[i - 1][j + 1] == '#') && (arr[i - 1][j - 1] == '#')))
                {
                    x = i;
                    y = j;
                }
            }
        }
        cout << x+1 << " " << y+1 << endl;
    }
    return 0;
}