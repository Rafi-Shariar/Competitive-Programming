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


//https://atcoder.jp/contests/abc073/tasks/abc073_c
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n; cin >> n;
        set<int>st;

        while (n--)
        {
            int x; cin >> x;

            if( st.count(x)){
                st.erase(x);
            }
            else
            {
                st.insert(x);
            }
            
        }

        cout << st.size() << endl;
        

        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  14-February-2024  15:26:11
*/ 
 