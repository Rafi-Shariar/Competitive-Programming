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

//https://vjudge.net/contest/608166#problem/B
int find_div(ll n){

    vector<ll>v;

      for(ll i = 1; i*i <= n; i++){
      if(n % i == 0){
        v.push_back(i);
        if( n / i != i ){
          v.push_back(n/i);
        }
      }
   }

   return v.size();

}
int main()
{
    fast

    int t=1;
    cin>>t;


    while (t--)
    {
        ll l , r;
        cin >> l >> r;

        ll value = 0 , divs = 0;

        for (ll i = l; i <= r; i++)
        {
            ll now = find_div(i);
            if(  now > divs){
                value = i;
                divs = now;
            }
        }

        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n", l, r, value , divs);
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  04-February-2024  10:57:09
*/ 
 