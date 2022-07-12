// Not Understood

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

    ll N, T;
    cin >> T;
    while (T--)
    {
        cin >> N;

        ll a[N];

        for (ll i = 0; i < N; i++)
        {
            cin >> a[i];
        }

        ll op;
        string s;
        for (ll i = 0; i < N; i++)
        {
            cin >> op >> s;

            ll total = 0;

            for (ll j = 0; j < op; j++)
            {
                if (s[j] == 'U')
                {
                    total += 1;
                }

                else
                {
                    total -= 1;
                }
            }

            a[i] -= total;

            a[i] += 10;
            a[i] %= 10;
        }

        for (ll i = 0; i < N; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}