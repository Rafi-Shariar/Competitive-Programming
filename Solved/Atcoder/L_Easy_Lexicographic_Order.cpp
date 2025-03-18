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


//https://vjudge.net/problem/AtCoder-abc217_a/origin
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        string s,t;
        cin >> s >> t;

        if ( s < t) cout << "Yes" << endl;
        else cout << "No" << endl;
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  21-January-2024  23:47:07
*/ 
 