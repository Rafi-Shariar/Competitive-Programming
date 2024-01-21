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

//https://www.spoj.com/problems/MAIN8_C/
bool pos(ll x, vector<ll>&v ,ll k){

    ll c = 0;

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
    cin>>t;

    while (t--)
    {
        ll boxes, k;
        cin >> boxes >> k;
        vector<ll>v(boxes);
        forin(v,boxes);
        sort(v);

        ll low = 1 , high = 1e9 ,ans = 0;

        while (low <= high)
        {
            ll mid = low + (high -low)/2;

            if( pos(mid, v , k)){
                ans = mid ;
                low = mid + 1;
            }
            else high = mid - 1;
        }

        cout << ans << endl;
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  21-January-2024  22:57:52
*/ 
 