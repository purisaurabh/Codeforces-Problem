#include<bits/stdc++.h>
using namespace std;



int main()
{
    string s;
    cin >> s;

    vector<char> v;
    vector<char>ans;

    for(int i = 0  ; i < s.length() ; i+=2)
    {
        v.push_back(s[i]);
    }

    sort(v.begin() , v.end());
    int j = 0;
    for(int i = 0; i < s.length() ; i++)
    {
        if(i%2!=0)
            ans.push_back('+');

        else
        {
            ans.push_back(v[j]);
            j++;
        }
    }
 
    for(int i  = 0 ; i < ans.size() ;i++)
    {
        cout << ans[i];
    }
    return 0;
}