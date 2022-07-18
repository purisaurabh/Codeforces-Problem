#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , m;
    cin >> n >> m;

    int count = -1;

    if(n == m)
    {
        cout << "0" << endl;
        return 0;
    }

    else if(m%n == 0)
    {
        count = 0;
        int ans = m/n;

        while(ans % 2 == 0)
        {
            ans = ans /2;
            count++;
        }

        while(ans % 3 == 0)
        {
            ans = ans / 3;
            count++;
        }

        if(ans != 1)
            count = -1;
    }

    cout << count << endl;


}