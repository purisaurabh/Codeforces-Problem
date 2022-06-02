#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[6];
    int count_num = 0;
    int m = 1;
    for(int i = 0 ; i < 6 ; i++)
    {
        arr[i] = n % 10;
        n = n / 10;

        if(arr[i] != 0)
            count_num++;
    }

    cout << count_num << endl;

    for(int i = 0 ; i < 6 ; i++)
    {
        if(arr[i] != 0)
        {
            cout << arr[i] * m << endl;
        }

        m = m * 10;
    }

    return 0;
}