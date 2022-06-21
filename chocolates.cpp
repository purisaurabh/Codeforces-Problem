#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> v(n);
    
    for(int i = 0 ; i < n ; i++)
    {
        cin >> v[i];
    }
    
    long long sum = 0;
    sum = v[n-1];
    
    for(int i = n-2 ; i >=0 ; i--)
    {
        int m = min(v[i+1]-1 , v[i]);
        
        if(m < 0)
            m = 0;
            
        v[i] = m;
        sum += m;
    }
    
    cout << sum << endl;
    
}
