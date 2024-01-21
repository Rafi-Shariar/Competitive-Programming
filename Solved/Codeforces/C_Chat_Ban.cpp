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


//https://codeforces.com/problemset/problem/1612/C
ll k,x;
ll getSum(ll n){
    return n*(n+1)/2;
}
ll range_sum(ll l, ll r){

    return getSum(r) - getSum(l-1);
}
bool pos(ll mid){

    ll sum = 0;

    if( mid <= k){
        sum = range_sum(1,mid);
    }
    else
    {
        sum = range_sum(1,k) + range_sum( k - (mid - k), k-1);
    }

    return sum >= x;
    
}
int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        cin >> k >> x;

        ll low = 1 , high = (2*k - 1) , ans = 2*k - 1;

        while (low <= high)
        {
            ll mid = low + (high - low)/2;

            if( pos(mid)){
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
Created:  20-January-2024  23:04:01
*/ 
 