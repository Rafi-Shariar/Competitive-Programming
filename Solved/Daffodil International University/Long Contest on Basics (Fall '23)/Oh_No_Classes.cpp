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


//https://vjudge.net/contest/589783#problem/G
int main()
{
    //fast

    int t=1;
    cin>>t;

    while (t--)
    {
        vector<pair<int,int>>v;

        int mn = INT_MAX, mx = INT_MIN;

        for (int i = 0; i < 3; i++)
        {
            int a, b; cin >> a >> b;
            mn = min( min(a,b),mn);
            mx = max(max(a,b),mx);

            if( a > b) swap(a,b);

            v.push_back({a,b});
        }

        int freq[mx+1] = {0};

        for (int i = 0; i < 3; i++)
        {
            int x = v[i].first;
            int y = v[i].second;

            for (int j = x; j <= y; j++)
            {
                freq[j] = 1;
            }
            
        }

        ll c = 0;


        for (int i = mn; i <= mx; i++)
        {
           if( freq[i] ) c++;
            
        }

        cout << c << endl;
        
        



        
    }
    

    return 0;
}