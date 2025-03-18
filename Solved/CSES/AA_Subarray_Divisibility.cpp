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
 

//https://cses.fi/problemset/task/1662/
 
int main()
{
    fast
 
    int t=1;
    //cin>>t;
 
    while (t--)
    {
        int n; cin >> n;
        vector<int>v(n);
        forin(v,n);

        map<int,int>mp;
        mp[0] = 1;

        ll sum = 0 , c=0;

        for (int i = 0; i < n; i++)
        {
            //if(v[i] % n == 0 && v[i] != 0) c++;
            sum += v[i];
            ll x = sum % n;

            if( x < 0) x += n;

            c += mp[x];
            mp[x]++;
        }
        

        cout << c << endl;
        

        
        
    }
    
 
    return 0;
}
/*
Author: Rafi Shariar
Created:  24-January-2024  22:29:22
*/ 
