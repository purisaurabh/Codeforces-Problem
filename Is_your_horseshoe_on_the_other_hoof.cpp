#include<bits/stdc++.h>
using namespace std;


int main()
{
    set <int> s;
    int n = 4;
    int k;
    while(n--)
    {
        cin >> k;
        s.insert(k);
    }

    cout << 4 - s.size() ;
    return 0;
}