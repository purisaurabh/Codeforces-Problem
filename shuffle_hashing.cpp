#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string p , h , n;
        cin >> p >> h;
        sort(p.begin() , p.end());
        int n1 = p.size();
        int n2 = h.size();
        bool flag = false;
        
        for(int i = 0 ; i <= n2-n1 ; i++)
        {
            n = h.substr(i , n1);
            sort(n.begin(), n.end());
            if(n == p)
            {
                flag = true;
                break;
            }
        }
        
        if(flag)
        {
            cout << "YES";
        }
        
        else
        {
            cout << "NO";
        }
        
        cout << endl;
    }
    return 0;
}
