#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int c,pos,pos2,i;
    cin >> t;
    while(t--)
    {
        string str , ans;
        int i , count = 0 ,position_1 = 0 , position_2 = 0;
        cin >> str;

        for(i = 0; i < str.length() ; i++)
        {
            if(str[i] == '1')
            {
                position_1 = i;
                break;
            }
        }

        for(i = str.length(); i >= position_1; i--)
        {
            if(str[i] == '1')
            {
                position_2 = i;
                break;
            }
        }

        for(i = position_1 ; i < position_2; i++)
        {
            if(str[i] == '0')
                count++;
            else
                ans += '1';
        }
        cout << count << endl;
    }
}