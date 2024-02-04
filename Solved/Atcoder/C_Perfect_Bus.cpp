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

//https://atcoder.jp/contests/abc339/tasks/abc339_c
bool pos(vector<ll>&v, ll mid){

    ll sum = mid;

    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];

        if( sum < 0) return false;
    }

    return true;
    
}
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
        sum = accumulate(v.begin() , v.end() , sum);

        ll low = 0 , high = 1e18+2 , ans = 0;

        while (low <= high)
        {
            ll mid = low + (high-low)/2;

            if( pos(v,mid)){
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }

        cout << ans + sum << endl;
        
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  03-February-2024  18:11:22
*/ 
 