/*
Ternary numeric notation is quite popular in Berland. 
To telegraph the ternary number the Borze alphabet is used. 
Digit 0 is transmitted as «.», 1 as «-.» and 2 as «--». 
You are to decode the Borze code, i.e. to find out the ternary number given its representation in Borze alphabet.
*/


#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin , s);

    int a = 0 , b = s.size();

    while( a < b)
    {
        if(s[a] == '.')
        {
            cout << "0";
            a++;
        }

        else if(s[a] == '-' && s[a+1] == '.')
        {
            cout << "1";
            a += 2;
        }

        else if(s[a] == '-' && s[a+1] == '-')
        {
            cout << "2";
            a += 2;
        }
    }
    return 0;
}