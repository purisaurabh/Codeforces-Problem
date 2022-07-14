
/*
Vanya got n cubes. He decided to build a pyramid from them. Vanya wants to build the pyramid as follows:
 the top level of the pyramid must consist of 1 cube, the second level must consist of 1 + 2 = 3 cubes, 
 the third level must have 1 + 2 + 3 = 6 cubes, and so on. 
 Thus, the i-th level of the pyramid must have 1 + 2 + ... + (i - 1) + i cubes.
Vanya wants to know what is the maximum height of the pyramid that he can make using the given cubes.
*/


#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int n;
	cin >> n;
	int sum = 0;
	int i = 0 ;
	while (sum <= n)
	{
		i++;
		sum += (i * (i + 1)) / 2;
	}
 
	cout << i - 1;
}





