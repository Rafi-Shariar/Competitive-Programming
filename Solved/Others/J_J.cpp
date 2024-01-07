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


//https://vjudge.net/contest/602871#problem/J
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        vector<int>v(3);
        forin(v,3);

        int k; cin >> k;
        sort(v);

        int cur = v[2];

        for (int i = 0; i < k; i++)
        {
            cur += cur;
        }

       cout << v[0] + v[1] + cur << endl;
        
        
        
    }
    

    return 0;
}