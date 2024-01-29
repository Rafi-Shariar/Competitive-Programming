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


//https://vjudge.net/contest/575132#problem/F
int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        int n; cin >> n;
        vector<int>v(n);
        forin(v,n);

        int dif = INT_MIN;

        int mx = v[0];

        for (int i = 1; i < n; i++)
        {
            dif = max( dif , mx - v[i]);
            mx = max(mx , v[i]);
        }

        cout << dif << endl;
        
        
        
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  29-January-2024  18:58:53
*/ 
 