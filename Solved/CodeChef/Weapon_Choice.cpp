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


//https://www.codechef.com/START117D/problems/WEPCH
int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        ll h,x,y1,y2,k;
        cin >> h >> x >> y1 >> y2 >> k;

        ll ans1 = 0 , ans2 = 0;

        if( h % x == 0) ans1 = h/x;
        else ans1 = (h/x) + 1;

        ll full = y1 * k;

        if( full >= h){

            if( h % y1 == 0) ans2 = h/y1;
            else ans2 = (h/y1) + 1;
        }
        else
        {
            ll res = h - full;


            if( res % y2 == 0) ans2 = k + ( res/y2);
            else ans2 = k + ( (res/y2) + 1);
        }

        cout << min( ans1 , ans2) << endl;
        


    }
    

    return 0;
}