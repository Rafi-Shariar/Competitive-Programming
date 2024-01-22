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



int main()
{
      int t; cin>>t;

    for (int i = 1; i <= t; i++)
    {
        int a,b;
        cin>>a>>b;

        int ans;
        
        if(b>=a) ans = 19 + (b*4);
        else{
             ans = 19 + ((a-b)*4) + (a*4);
        }

        printf("Case %d: %d\n",i,ans);
    }

    return 0;
}
/*
Author: Rafi Shariar
Created:  22-January-2024  20:35:26
*/ 
 