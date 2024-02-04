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

//https://atcoder.jp/contests/abc339/tasks/abc339_a

int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        string s; cin >> s;

        string ans = "";

        for (int i = s.size()-1; i >=0; i--)
        {
            if( s[i] == '.') break;

            ans += s[i];
        }

        reverse(ans.begin() , ans.end());

        cout << ans << endl;
        
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  03-February-2024  18:00:53
*/ 
 