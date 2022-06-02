/*
Petya loves lucky numbers. We all know that lucky numbers are the positive integers whose decimal representations contain only the 
lucky digits 4 and 7. 
For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.
*/


/*
inputCopy
40047
outputCopy
NO
inputCopy
7747774
outputCopy
YES
inputCopy
1000000000000000000
output
NO
*/

#include<iostream>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    int count = 0;
    while(n != 0)
    {
        int rem = n % 10;
        if(rem == 4 || rem == 7)
            count++;

        n = n / 10;
    }

    if(count == 4 || count == 7)
    {
        cout << "YES" << endl;
    }

    else
    {
        cout << "NO" << endl;
    }
    return 0;
}

