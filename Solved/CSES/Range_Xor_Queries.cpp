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


//https://cses.fi/problemset/submit/1650/
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n,q;
        cin >> n >> q;
        vector<int>v(n+1);

        for (int i = 1; i <= n; i++) cin >> v[i];

        vector<int>pre(n+1);
        pre[0] = 0;

        for (int i = 1; i <= n; i++)
        {
            pre[i] = (pre[i-1] ^ v[i]);
        }

        while (q--)
        {
            int l,r; cin >> l >> r;

            cout << ( pre[r] ^ pre[l-1]) << endl;
        }
        
        

        
        

        
       
       
       
        
        
    }
    

    return 0;
}