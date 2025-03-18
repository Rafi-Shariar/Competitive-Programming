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

//https://cses.fi/problemset/result/8273049/
bool pos(ll x , vector<ll>v, ll k , ll n){

    ll c = 0;

    for (ll i = 0; i < n; i++)
    {
        c += (x/v[i]*1LL);

        if( c >=k) return true;
    }

    return c>=k;
    
}
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        ll n,k; cin >> n >> k;
        vector<ll>v(n);
        forin(v,n);
        sort(v);


        ll low = 0 , high = v[n-1]*k;
        ll ans = 0;

        while (low <= high)
        {
            ll mid = low + (high - low )/2;


            if( pos(mid , v, k , n)){
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }

        cout << ans << endl;
        
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  24-January-2024  13:49:20
*/ 
 