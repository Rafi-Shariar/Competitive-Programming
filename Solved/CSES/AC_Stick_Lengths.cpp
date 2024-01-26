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


//https://cses.fi/problemset/result/8297522/
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n; cin >> n;
        vector<ll>v(n);
        forin(v,n);

        sort(v);

        ll cost = 0 , idx = 0;

        if( n % 2 == 1 ){
           idx = v[n/2];   
        }
        else
        {
            idx = v[n/2] + v[(n/2) - 1];
            idx = idx/2;
        }

        debug(v);

        //cout << idx << endl;

        for (int i = 0; i < n; i++)
        {
            //cout << abs(idx - v[i]) << " ";
            cost += abs( idx - v[i] );
        }

        cout << cost << endl;
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  27-January-2024  00:57:40
*/ 
 