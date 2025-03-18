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


ll numberofDivisor( ll n){

    map<ll,int>mp;
    while( n%2==0){
        mp[2]++;
        n/=2;
    }

    for (ll i = 3; i <= sqrt(n); i+=2)
    {
        while( n % i == 0){
            mp[i]++;
            n/=i;
        }
    }

    if(n>2) mp[n]++;

    return mp.size();

}
int main()
{
    fast

    int t=1;
    //cin>>t;

    ll n;

    while ( cin >> n && n)
    {
        cout << n << " : "<<numberofDivisor(n)<< endl;
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  04-February-2024  01:10:06
*/ 
 