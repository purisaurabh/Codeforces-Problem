/*
A prime number is a number which has exactly two distinct divisors: one and itself. 
For example, numbers 2, 7, 3 are prime, and 1, 6, 4 are not.

The next prime number after x is the smallest prime number greater than x. For example, the next prime number after 2 is 3, 
and the next prime number after 3 is 5. Note that there is exactly one next prime number after each number. 
So 5 is not the next prime number for 2.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a , b;
    int arr[16] = { 2 ,3 , 5 , 7 , 11 , 13 , 17 ,19 ,23 , 29 , 31 , 37 , 41 , 43 , 47};

    cin >> a >> b;
    int count = 0;
    for(int i = 0 ; i < 15 ; i++)
    {
        if(a == arr[i] && b == arr[i+1])
        {
            count++;
            break;
        }
    }

    if(count > 0)
        cout <<  "YES" << endl;
    
    else    
        cout << "NO" << endl;
}