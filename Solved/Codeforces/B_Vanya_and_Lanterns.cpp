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


//https://codeforces.com/contest/492/problem/B
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n,road_size;
        cin >> n >> road_size;

        vector<double>v(n);
        forin(v,n);
        sort(v);

        double ans = v[0];

        for (int i = 1; i < n; i++)
        {
            double now = (v[i] - v[i-1]) / 2.0;

            if( now > ans)
                   ans = now;
        }

        if( road_size - v[n-1] > ans) ans = road_size - v[n-1];

        cout << setprecision(10) << ans << endl;
        

        
        
    }
    

    return 0;
}