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


//https://vjudge.net/contest/604185#problem/A
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n; cin >>n ;
        set<string>st;

        for (int i = 0; i < n; i++)
        {
            string s; cin >> s;
            st.insert(s);
        }

        string ans = "";
        int k ; cin >> k;



        if( st.size() >= k){
            int c = 0;

            for(auto i : st){
                ans += i;
                c++;

                if( c == k) break;
            }

        }
        else
        {
            for(auto i : st){
                ans += i;
            }
        }

        cout << ans << endl;
        

        
        
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  16-February-2024  12:20:54
*/ 
 