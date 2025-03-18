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


//https://cses.fi/problemset/task/1629/
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n; cin >> n;
        vector< pair<int,int>> v;

        for (int i = 0; i < n; i++)
        {
            int st,end;
            cin >> st >> end;

            v.push_back({end,st});
        }

        sort(v);

        int now = 0;
        int c = 0;

        for (int i = 0; i < n; i++)
        {
            if( now  <= v[i].second){
                c++;
                now = v[i].first;
            }
        }

        cout << c << endl;
        
        
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  27-January-2024  22:19:20
*/ 
 