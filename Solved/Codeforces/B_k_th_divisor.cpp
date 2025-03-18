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


void find_div(ll n, vector<ll>&v){

    for (ll i = 1; i*i <= n; i++)
    {
        if( n%i == 0){
            v.push_back(i);

            if( n/i != i){
                v.push_back(n/i);
            }
        }
    }
    
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

        vector<ll>v;
        find_div(n , v); // 1 2 4
        k--;

        sort(v);

        //for(auto i : v) cout << i << " ";

        if( v.size() <= k) cout << -1 << endl;
        else cout << v[k] << endl;

        //cout << v[k] << endl;


        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  06-February-2024  22:11:55
*/ 
 