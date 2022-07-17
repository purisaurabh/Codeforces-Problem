#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    vector<int>v(7);
    for(int i = 0 ; i < 7 ; i++)
    {
        cin >> v[i];
    }
    
    int count = 0;
    while(n > 0)
    {
        n = n - v[count];
        if(n <= 0)
            break;
        count++;
        count = count % 7;
    }
    cout << count + 1<< endl;
}