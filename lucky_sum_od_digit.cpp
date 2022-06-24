#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int four = 0 , seven = 0;
    while(n >= 0)
    {
        if(n % 7 == 0)
        {
            seven = n / 7;
            n = 0;
            break;
        }

        four++;
        n = n -4;
    }

    if(n == 0)
    {
        while(four--)
            cout << "4";

        while(seven--)
            cout << "7";
    }

    else
    {
        cout << "-1";
    }
    return 0;
}