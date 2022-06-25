#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int i = 0;
        int j = n-1;
        
        while(i <= j)
        {
            char x = s[i] , y = s[j];
            char p_1 = (x == 'a') ? '1' : x-1;
            char p_2 = (y == 'a') ? '1' : y-1;
            
            char n_1 = (x == 'z') ? '2' : x+1;
            char n_2 = (y == 'z') ? '2' : y+1;
            
            if(p_1 == p_2  || p_1 == n_2)
            {
                i++;
                j--;
            }
            
            else if(p_2 == n_1 || p_2 == p_1)
            {
                i++;
                j--;
            }
            
            else
                break;
                
        }
        
        if(i>j)
            cout << "YES";
        
        else
            cout << "NO";
        
        cout << endl;
    }
}
