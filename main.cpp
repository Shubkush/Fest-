#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
    int t , j, i ;
    cin >> t ;
    while(t--)
    {
        int n , k , e , m , kul, opp, final1 = 0 ;
        cin >> n >> k >> e >> m ;
        int sum[n-1] ;

        for(j = 0 ; j< n-1 ; j++)
        {
            int b[e] ;
            kul = 0 ;
            for(i = 0 ; i < e ; i++)
            {
                cin >> b[i] ;
                kul = kul + b[i] ;
            }
            sum[j] = kul ;
        }
        int c[e-1] ;
        kul = 0 ;
        for(j = 0 ; j < e-1 ; j++)
        {
            cin >> c[j] ;
            kul = kul+ c[j] ;
        }
        sort(sum , sum+(n-1), greater<int>()) ;

        opp = sum[k-1] ;

        final1 = (opp - kul + 1) ;

        if(final1 <= m && final1 > 0)
        {
            cout << final1  << endl ;
        }
        else if (final1 <= 0 )
        {
            cout << "0" << endl ;
        }
        else
        {
            cout << "Impossible" << endl ;
        }
    }
    return 0;
}
