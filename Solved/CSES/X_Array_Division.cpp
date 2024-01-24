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

//https://cses.fi/problemset/task/1085/
bool pos(ll x , vector<ll>&v , ll k){

    int c = 1;
    ll sum = 0;

    for (int i = 0; i < v.size(); i++)
    {
        if( v[i] > x) return false;

        sum += v[i];

        if( sum > x){
            sum = v[i];
            c++;
        }
        
    }

   // cout << x << " " << c << endl;


    return c <= k;
    
}
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        ll n,k;
        cin >> n >> k;
        vector<ll>v(n);
        ll sum_max = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum_max += v[i];
        }
        


        ll low = 1 , high = 1e18 , ans = 0;

        while (low <= high)
        {
            ll mid = low + ( high - low )/2;

            if( pos(mid , v , k )){
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
Created:  24-January-2024  17:51:45
*/ 
 