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

//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/W
bool pos(ll n , ll x){

    if( x == n) return true;
    else if ( x > n ) return false;

    return pos(n , x*10) || pos(n , x*20);
}
int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        ll n; cin >> n;
        ll x = 1;

        if( pos(n,x) ) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  16-February-2024  10:27:04
*/ 
 