#include<iostream>
using namespace std;


int main()
{
    int n;
	cin>>n;
	int capacity = 0;
	int sum = 0;

	for(int i = 0 ; i < n ; i++)
    {
		int a,b;
		cin >> a >> b;
		sum -= a;
		sum += b;
		capacity = max (capacity,sum);

	 }
	 cout << capacity;
    return 0;
}