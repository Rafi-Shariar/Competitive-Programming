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


//https://atcoder.jp/contests/abc337/tasks/abc337_b
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        string s; cin >> s;
        vector<int>v;

        for (int i = 0; i < s.size(); i++)
        {
            if( s[i] == 'A') v.push_back(1);
            else if ( s[i] == 'B')  v.push_back(2);
            else if( s[i] == 'C')  v.push_back(3);
        }

        bool ok = is_sorted(v.begin() , v.end());

        if( ok ) cout << "Yes" << endl;
        else cout << "No" << endl;
        
    
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  20-January-2024  18:08:29
*/ 
 