#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int flag = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 33 && s[i] <= 126)
        {
            if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
                flag = 1;
        }
    }
    if (flag)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}