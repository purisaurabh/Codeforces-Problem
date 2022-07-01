#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <int> v(n);
    
    int odd_number = 0;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> v[i];
        if(v[i] % 2)
        {
            odd_number++;
        }
    }
    
    odd_number = odd_number / 2;
    
    for(auto i : v)
    {
        if(i % 2)
        {
            if(odd_number > 0) 
            {
                odd_number--;
                i--;
            }
            
            else
            {
                i++;
            }
            
        }
        
        cout << i / 2 << endl;
    }
    return 0;
}