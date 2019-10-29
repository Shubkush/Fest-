#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
    int t , n , i, start , end1 , j,k;
    cin >> t ;
    while(t--)
    {
        int flag = 0 ;
        cin >> n ;
        int c[n] , h[n] , real[n];
        for(i=0;i<n;i++)
        {
            cin >> c[i] ;
        }
        for(i=0;i<n;i++)
        {
            cin >> h[i] ;
            real[i] = 0 ;
        }
        for(j = 0 ; j < n ; j++)
        {
            start = j - c[j] ;
            end1 = j + c[j] ;
            if(start < 0)
                start = 0 ;
            if(end1>n)
                end1= n-1 ;
            for(i = start ; i <= end1 ; i++)
            {
                real[i] = real[i] + 1 ;
            }
        }
        sort(real,real+n) ;
        sort(h,h+n) ;

        for(i=0;i<n;i++)
        {
            if(real[i] != h[i])
                flag= 1 ;
        }
        if(flag ==0 )
            cout <<"YES" << endl ;
        else
            cout <<"NO" << endl ;
    }
    return 0;
}
