#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> ;
    int arr[n*2];;
    for(int i = 0 ; i < n *2 ; i++)
    {
        cin >> arr[i];
    }

    int left0 = 0 , left1 = 0;
    int right0 = 0 , right1 = 0;
    for(int i = 1; i <= n*2 ; i+=2)
    {
        if(arr[i] == 0)
            left0++;
        else
            left1++;
    }

    for(int j = 2 ; j <= n *2 ; j+= 2)
    {
        if(arr[i] == 0)
            right0++;

        else
            right1++;
    }
    int ans = 0;

    if(left0 > left1)
        ans += left1;
    
    else
        ans += left0;

    if(right0 > right1)
        ans += right1;

    else    
        ans += right0;

    
    cout << ans;
    return 0;
}