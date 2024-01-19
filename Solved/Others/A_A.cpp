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



int main()
{
    fast

    int t=1;
   // cin>>t;

    while (t--)
    {
        double a; cin >> a;

        double x = (5280.0/4854.0) * 1000.0;

        double ans = round(a*x);

        printf("%.lf\n",ans);




    }
    

    return 0;
}