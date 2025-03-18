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


//https://www.codechef.com/START119C/problems/ADVITIYA3
int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int>v(n);
        forin(v,n);

        int ans = INT_MAX;

        bool pos = false;

        for (int i = 0; i < n; i++)
        {
            if( v[i] >= k){

                ans = min(ans , v[i]%k);
                pos = true;
            }
        }

        if( !pos) cout << -1 << endl;
        else cout << ans << endl;
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  31-January-2024  20:35:45
*/ 
 