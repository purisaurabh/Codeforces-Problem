#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string ans;
        cin >> ans;
        if (ans.size() > 10)
        {
            cout << ans[0] + to_string(ans.size()-2) + ans[ans.size() - 1] << endl;
        }

        else
        {
            cout << ans << endl;
        }
    }

    return 0;
}