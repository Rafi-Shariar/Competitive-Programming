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

// 1 1 2 3 5 8 13
int fib( int n , vector<int>&dp){

    if( n <= 1) return 1;

    if( dp[n] != -1 ) return dp[n];

    return dp[n] = fib(n-1 , dp) + fib(n-2 , dp);
}

int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n; cin >> n;
        vector<int>dp(n+1 , -1 );

        cout << fib(n,dp) << endl;
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  06-February-2024  00:41:29
*/ 
 