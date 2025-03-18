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



int main()
{
    //fast

    int t=1;
    cin>>t;

    while (t--)
    {
        int n,q;
        cin >> n >> q;
        vector<ll>v(n+1,0);

        while (q--)
        {
            ll l,r,x;
            cin >> l >> r >> x;

            v[l] += x;
            v[r+1] += -x; 
            
        }


        for (int i = 1; i <= n; i++)
        {
            v[i] += v[i-1];
        }
        


        int p; cin >> p;

        while (p--)
        {
            int ind; cin >> ind;

            cout << v[ind] << endl;
        }
        
    }
    
    return 0;
}

 