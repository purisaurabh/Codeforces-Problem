#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int row = -n ; row <= n ; row++)
    {
        int t = n - abs(row);
        
        for(int i = 0 ; i < abs(row) ; i++)
        {
            cout << "  ";
        }
        
        for(int i = 0; i < t ; i++)
        {
            cout << i << " ";
        }
        
        for(int i = t ; i > 0 ; i--)
        {
            cout << i << " ";
        }
        
        cout << "0" << endl;
    }

    return 0;
}