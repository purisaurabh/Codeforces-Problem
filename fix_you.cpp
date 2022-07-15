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

        vector<string> vec(n);

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (vec[i][m - 1] == 'R')
                count++;
        }

        for (int i = 0; i < m; i++)
        {
            if (vec[n - 1][i] == 'D')
                count++;
        }

        cout << count << endl;
    }
}
