#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int j = 1;
    string ans = "";
    int i = 0;
    while(i < n)
    {
        ans.push_back(str[i]);
        i += j;
        j++;
    }

    cout << ans << endl;
}