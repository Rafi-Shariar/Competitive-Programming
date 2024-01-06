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

//https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/E
double pos( double mid){

    double ans = (mid * mid) + sqrt(mid);

    return ans;
}
int main()
{
    fast

    int t=1;
   // cin>>t;

   double df = 1e-6;

    while (t--)
    {
        double c; cin >> c;

        double low = 0.0 , high = c;

        while (low <= high)
        {
            double mid = low + (high - low)/2.0;

           double x = pos(mid);

           if( abs(x-c) < df){
            printf("%.6lf", mid);
            return 0;
           }

           if( x < c ) low = mid + df;
           else high = mid - df;

        }

        printf("%.6lf",low);
        
        
    }
    

    return 0;
}