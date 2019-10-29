#include <iostream>

using namespace std;

int main()
{
    int t , n , i , mean, res, flag;
    unsigned long long int sum ;
    cin >> t ;
    while(t--)
    {
        sum = 0;
        flag =0 ;
        cin >> n ;
        int a[n] ;
        for(i=0; i <n;i++)
        {
            cin >> a[i] ;
            sum = sum+a[i] ;
        }
        if(sum%n != 0 )
            flag = 0 ;
        else
        {
            mean =(sum/n) ;
            for(i = 0 ; i<n;i++)
            {
                if(a[i] == mean)
                {
                    res = i+1 ;
                    flag = 1 ;
                    break  ;
                }
            }
        }
        if(flag == 1)
            cout << res << endl ;
        else
            cout << "Impossible" << endl ;
    }
    return 0;
}
