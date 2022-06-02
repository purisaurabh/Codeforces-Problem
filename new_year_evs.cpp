#include<iostream>
using namespace std;

int main()
{
    long long int n , k;
    cin >> n >> k;


    if( k == 1)
    {
        cout << n ;
        return 0;
    }

    long long int a = 1;

    while(a < n)
    {
        a = 2*a + 1;
    }

    cout << a;

    return 0;
}