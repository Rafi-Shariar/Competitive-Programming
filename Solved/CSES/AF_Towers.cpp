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

//https://cses.fi/problemset/result/8314044/

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

        multiset<int>st;

        for (int i = 0; i < n; i++)
        {
            auto it = st.upper_bound(v[i]);

            if( it != st.end()){
                st.erase(it);
                st.insert(v[i]);
            }
            else
            {
                st.insert(v[i]);
            }
            
        }

        cout << st.size() << endl;
        
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  28-January-2024  21:07:40
*/ 
 