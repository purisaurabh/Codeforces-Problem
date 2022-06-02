#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    set<char> se;

    for(int i = 0 ; i < s.size(); i++)
    {
        se.insert(s[i]);
    }

    if(se.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }

    else
    {
        cout << "IGNORE HIM!";
    }
    return 0;
}