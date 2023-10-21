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


//https://cses.fi/problemset/result/7452502/
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n; cin>>n;
        vector<int>v(n);
        forin(v,n);

        ll maxx = INT_MIN, cur_sum = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            debug(cur_sum+v[i]);
            cur_sum = max( (ll)v[i] , cur_sum + v[i]);
            maxx = max( maxx, cur_sum);
        }

        cout<< maxx <<endl;

        
        


        
        
    }
    

    return 0;
}