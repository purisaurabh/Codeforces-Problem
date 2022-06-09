#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<string> v(n);

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (v[i][m - 1] == 'R')
                count++;
        }

        for (int i = 0; i < m; i++)
        {
            if (v[n - 1][i] == 'D')
                count++;
        }

        cout << count << endl;
    }
}
