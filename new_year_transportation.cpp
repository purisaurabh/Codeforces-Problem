#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n , t;
    cin >> n >> t;
    vector<int>v(n);
    for(int i = 0 ; i < n ; i++)
    {
        cin >> v[i];
    }
    
    int position = 1;
    int next_value;
    
    while(position < t)
    {
        next_value = position + v[position - 1];
        position = next_value;
    }
    
    if(position == t)
    {
        cout << "YES" << endl;
    }
    
    else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}