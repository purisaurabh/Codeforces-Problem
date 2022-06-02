#include<iostream>
using namespace std;

int main()
{
    
    int n;
	cin >> n;
	int count = 0, ans = 0;

	while (n--)
	{
		int arr[3];
		for (int i = 0 ; i < 3 ; i++)
		{
			cin >> arr[i];
		}

		for (int i = 0 ; i < 3 ; i++)
		{
			if (arr[i] == 1)
				count++;
		}


		if (count >= 2)
		{
			ans++;
		}

		count = 0;
	}

	cout << ans;
}