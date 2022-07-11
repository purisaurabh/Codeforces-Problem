#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a , b, n;
        cin >> a >> b >> n;
        int sum = 0,count = 0;
        while(sum <= n)
        {
            if(a < b)
            {
                a += b;
                sum = a;
                count++;
            }
            
            else
            {
                b += a;
                sum = b;
                count++;
            }
            
            if(sum > n)
            {
                break;
            }
        }
        cout << count << endl;
    }
 
    return 0;
}