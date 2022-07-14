#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    string ans = "";
    int j = 0;
    for(int i = 0 ; i < n ; i+=j)
    {
        ans.push_back(s[i]);
        j++;
    }
    
    cout << ans ;
    return 0;
}