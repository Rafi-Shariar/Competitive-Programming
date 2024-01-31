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
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n; cin >> n;
        map<int,int>mp;

        for (int i = 0; i < n; i++)
        {
            int a; cin >> a;
            mp[a]++;
        }

        int mn = 0;
        int ans;
        
        for(auto i : mp){

            if(i.second >= mn){
                mn = i.second;
                ans = i.first;
            }

        }

        cout << ans << endl;
        
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  31-January-2024  23:46:39
*/ 
 