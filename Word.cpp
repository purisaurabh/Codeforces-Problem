#include<iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int upper  = 0 , lower = 0;

    for(int i = 0 ; i < s.length() ; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            lower++;
        }

        else if(s[i] >= 'A' && s[i] <= 'Z')
        {
            upper++;
        }
    }

    if(lower > upper)
    {
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = s[i] + 32;
            }
        }
    }

    else if(lower == upper)
    {
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = s[i] + 32;
            }
        }
    }

    else if(upper > lower)
    {
        for(int i = 0 ; i < s.length() ; i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] = s[i] - 32;
            }
        }
    }

    cout << s;
    return 0;
}
