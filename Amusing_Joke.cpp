#include<bits/stdc++.h>
using namespace std;

int main()
{
    string ans_1;
    string ans_2;
    string ans_3;

    cin >> ans_1;
    cin >> ans_2;
    cin >> ans_3;

    string result = ans_1 + ans_2;
    sort(result.begin() , result.end());

    sort(ans_3.begin() , ans_3.end());

    if(result == ans_3)
    {
        cout << "YES";
    }

    else
    {
        cout << "NO";
    }
    return 0;
}