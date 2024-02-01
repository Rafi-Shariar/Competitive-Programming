#include <bits/stdc++.h>
using namespace std;
#define ll         long long int
#define sort(x)    sort(x.begin(),x.end())
#define forin(x,n)  for(int i=0; i<n; i++) cin>>x[i];
#define endl       "\n"
#define fast       ios_base::sync_with_stdio(0); cin.tie(0) ; cout.tie(0);
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif


double p,q,r,s,t,u;
double pos(double x)
{
    return p * exp(-x) + q * sin(x) + r * cos(x) + s * tan(x) + t * x * x + u;
}
int main()
{
    //fast

    while (cin >> p >> q >> r >> s >> t >> u)
    {
        double low = 0.0 , high = 1.0 , ans = -1;

        while ( high - low >= 1e-4)
        {
            double mid = low + (high-low)/2.0;

            double now = abs(pos(mid));

            if( now <= 0.0001){
                ans = mid;
                break;
            }
            else if( pos(mid) > 0) low = mid;
            else high = mid;

        }


        if( ans == -1 ) cout << "No solution" << endl;
        else printf("%.4lf\n",ans) ;
        

        
    }
    


    return 0;
}
/*
Author: Rafi Shariar
Created:  01-February-2024  22:46:14
*/ 
 