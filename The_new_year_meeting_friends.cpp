#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int>v(3);
    for(int i = 0 ; i < 3 ; i++)
    {
        cin >> v[i];
    }

    sort(v.begin() , v.end());

    int value = abs(v[1]-v[0]) + abs(v[1]-v[2]);

    cout << value << endl;
    return 0;
}