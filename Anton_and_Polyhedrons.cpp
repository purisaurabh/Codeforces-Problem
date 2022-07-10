#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int n;
	cin >> n;
 
	string poly[n];
 
	for (int i = 0; i < n ; i++)
	{
		cin >> poly[i];
	}
 
	int sum = 0;
	for (int i = 0; i < n ; i++)
	{
		if (poly[i] == "Tetrahedron")
			sum += 4;
 
		else if (poly[i] == "Cube")
			sum += 6;
 
		else if (poly[i] == "Octahedron")
			sum += 8;
 
		else if (poly[i] == "Dodecahedron")
			sum += 12;
 
		else if (poly[i] == "Icosahedron" )
			sum += 20;
	}
 
	cout << sum << endl;
}