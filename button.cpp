#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int s = n;
    for (int i = 1; i < n; i++)
        s += (n - i) * i;

    cout << s << endl;
    return 0;
}

