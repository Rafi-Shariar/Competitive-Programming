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

//https://www.codechef.com/START120C/problems/VAL142

int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        int n; cin >> n;

        int ans = 1  + 2 + 4 + 8 + 16+  32+  64 ;
        
        if( n < ans) cout << "NO" << endl;
        else cout << "YES" << endl;
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  07-February-2024  20:31:31
*/ 
 
 // 1 2 4 8 16 32 64 