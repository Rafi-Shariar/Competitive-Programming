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

//https://vjudge.net/contest/556835#problem/Q
ll f(ll l , ll r){
    
    ll n = r-l+1;

    //cout << l << " " << r<< endl;

    return (n*(n+1))/2;

}
int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        int n ; cin >> n;
        vector<int>arr(n);
        forin(arr,n);

        if( n <= 1){
            cout << 1 << endl;
           continue;
        }

        ll l = 0;
        ll ans = 0;

        for (ll r = 1; r < n; r++)
        {
            if( arr[r] < arr[r-1]){

                ans += f(l,r-1);
                l=r;
            }
        }


        //if( arr[n-1] >= arr[n-2]) ans += f(l,n-1);
         ans += f(l,n-1);

        cout << ans << endl;
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  30-January-2024  12:50:39
*/ 
 