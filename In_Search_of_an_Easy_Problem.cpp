#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n ; i++)
	{
		cin >> arr[i];
	}
 
	bool ans = false;
 
	for (int i = 0; i < n ; i++)
	{
		if (arr[i] == 1)
		{
			ans = true;
			break;
		}
	}
 
	if (ans)
	{
		cout << "Hard" << endl;
	}
 
	else
	{
		cout << "Easy" << endl;
	}
}