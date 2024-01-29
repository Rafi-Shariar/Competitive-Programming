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


//https://vjudge.net/contest/575132#problem/G
int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        string s; cin >> s;

        int l = 0 , r = s.size()-1;

        while ( l < s.size())
        {
            if( s[l] == '1') break;
            l++;
        }

        while (r > 0 && r >= l)
        {
            if( s[r] == '1') break;
            r--;
        }

        bool ok = true , clear = false;

        for (int i = l; i <= r; i++)
        {
            if( s[i] == '0'){
                ok = false;
            }
        }

        for (int i = 0; i < s.size(); i++)
        {
            if( s[i] == '1') clear = true;
        }
        

        if( ok && clear) cout << "YES" << endl;
        else cout << "NO" << endl;
        
        
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  29-January-2024  19:18:48
*/ 
 