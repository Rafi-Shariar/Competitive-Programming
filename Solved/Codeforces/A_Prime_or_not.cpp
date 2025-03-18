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

///https://vjudge.net/contest/579458#problem/A
bool prime(ll n){

    if( n <= 1) return false;
    if( n<= 3) return true;

    if( n % 2 == 0 || n % 3 == 0) return false;

    for (ll i = 5; i*i <= n; i+= 6)
    {
        if( n%i == 0 || n % (i+2) == 0) return false;
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
        ll n; cin >> n;

        if( prime(n) ) cout << "Yes" << endl;
        else cout << "No" << endl;
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  05-February-2024  20:28:44
*/ 
 