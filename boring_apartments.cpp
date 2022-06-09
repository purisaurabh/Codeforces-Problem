#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int rem = n % 10;
        int count = 0;
        while( n > 0)
        {
            n = n / 10;
            count++;
        }

        if(count == 1)
        {
            cout << (rem*10) - 10 + 1 << endl;
        }

        if(count == 2)
        {
            cout << (rem * 10) - 10 + 3 << endl;
        }

        if(count == 3)
        {
            cout << (rem * 10) - 10 + 6 << endl;
        }

        if(count == 4)
        {
            cout << (rem * 10) - 10 + 6 << endl;
        }
    }
    return 0;
}