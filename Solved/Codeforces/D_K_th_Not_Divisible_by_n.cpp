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

//https://codeforces.com/problemset/problem/1352/C
ll cur_kth(ll x , ll n){

    ll tmp = x/n;

    return (x - tmp);
}
int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        ll n , k;
        cin >> n >> k;

        ll low = 0, high = 3e9+7, ans = 0;

        while (low <= high)
        {
            ll mid = low + ( high - low )/2;

            ll now = cur_kth(mid,n);

            // // if( now == k) {
            // //     ans = mid;
            // //     break;
            // // }
            // else
            // {
            //     if( now < k) low = mid + 1;
            //     else high  = mid - 1;
            // }

            if( now < k) low = mid + 1;
            else{

                ans = mid;
                high = mid - 1;

            }
            
        }


        cout << ans << endl;
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  21-January-2024  19:57:42
*/ 
 