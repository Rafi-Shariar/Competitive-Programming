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


double pos(double mid , double n){

    return (mid*mid) + sqrt(mid);
}
double BS(double n){

    double low = 0 , high = n;

    while(low <=  high){

        double mid = low + (high - low )/2.0;

        debug(mid, pos(mid,n));

        if( pos(mid ,n) == n) return mid; 


        if( pos(mid,n) < n) low = mid + .5;
        else high = mid - .5;
    }

    return low;


}
int main()
{
    fast

    double n; cin >> n;

    printf("%lf\n",BS(n));

    return 0;
}