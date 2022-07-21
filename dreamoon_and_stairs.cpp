#include <bits/stdc++.h>
using namespace std;
 
int main()
{
        int a ;
        int b;
        cin >> a >> b;
        int count = 0;
        
        if( b > a)
        {
            count = -1;
        }
    
        else
        {
            if(a%2)
                count = a/2 + 1;
                
            else
                count = a/2;
                
            while(count%b > 0)
            {
                count++;
            }
        }
        
        cout << count << endl;
}