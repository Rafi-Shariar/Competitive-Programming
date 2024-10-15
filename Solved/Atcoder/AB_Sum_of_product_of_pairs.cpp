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


const ll mod = 1e9+7;
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n; cin >> n;
        vector<ll>v(n);
        forin(v,n);

        ll sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += v[i];
            sum%=mod;
        }

        ll ans = 0;

        for (int i = 0; i < n; i++)
        {
            sum -= v[i];
            if( sum < 0 ) sum += mod;

            ans += ( v[i] * sum);
            ans %= mod;
        }

        cout << ans << endl;

        


        
        
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  15-February-2024  23:53:02
*/ 
 