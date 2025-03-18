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


//https://codeforces.com/contest/1921/problem/A
int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        vector< pair<int,int> > v(4);

        for (int i = 0; i < 4; i++)
        {
            int a,b;
            cin >> a >> b;

            v[i] = {a,b};
        }

        sort(v);

        int ans = abs( v[0].second - v[1].second);

        cout << ans*ans << endl;
        
    }
    

    return 0;
}