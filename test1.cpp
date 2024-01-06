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


bool possible(ll w, ll h , ll n, ll mid){

    ll a = mid / w;
    ll b = mid / h;
    ll c = a * b;

    return c >= n;

}

ll fun(ll w, ll h, ll n){

    ll cur = w*h;

    while ( !possible(w,h,n,cur))
    {
        cur *= 2;
    }

    return cur;
    
}

ll BS(ll w , ll h , ll n){

    ll low = 1; 
    ll high = fun(w,h,n);

    while (low <= high)
    {
        ll mid = low + (high - low)/2;

        if( possible(w,h,n,mid) ) high = mid - 1;
        else low = mid + 1;

    }

    return low;
  
}
int  main()
{
    fast

    int t;

     t=1;
    //cin>>t;

    while (t--)
    {
        ll w,h,n;
        cin >> w >> h >> n;

        cout << BS(w,h,n) << endl;
    }
    

    return 0;
}