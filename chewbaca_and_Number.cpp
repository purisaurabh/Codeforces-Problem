#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int f = s[0]-'0';

    if(s[0] == '9')
    {
        s[0] = '9';
    }

    else
    {
        if(f < 5)
        {
            s[0] = f + '0';
        }

        else
        {
            s[0] = (9-f) + '0';
        }
    }

    for(int i = 1; i < s.size() ; i++)
    {
            if((s[i] - '0') < 5)
            {
                s[i] = s[i];
            }

            else
            {
                s[i] = (9 - (s[i] - '0')) + '0';
            }
    }

    cout << s << endl;
}