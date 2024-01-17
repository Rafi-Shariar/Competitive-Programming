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


bool pos(double x, vector<double>&v, int k){

    int c = 0;

    for (int i = 0; i < v.size(); i++)
    {
        c += (v[i]/x);
    }

    return c >= k;
    

}
int main()
{
    fast

    int t=1;
   // cin>>t;

    while (t--)
    {
        int n,k;
        cin >> n >> k;

        vector<double>v(n);
        forin(v,n);
        sort(v);

        double low = 0 , high = 2e9;
        double ans = 0;

        while ( high - low >= 1e-7)
        {
            double mid = low + (high-low)/2;

            if( pos(mid , v , k)){
                ans = mid;
                low = mid;
            }
            else high = mid;
        }
        

        printf("%.7lf\n",ans);



        
    }
    

    return 0;
}