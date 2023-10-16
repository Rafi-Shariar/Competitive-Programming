#include <bits/stdc++.h>
using namespace std;
#define ll         long long int
#define sort(x)    sort(x.begin(),x.end())
#define endl       "\n"
#define fast       ios_base::sync_with_stdio(0); cin.tie(0) ; cout.tie(0);
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif

const ll MOD = 1e9+7;
  
int main()
{
    fast;

    int t=1;
   // cin>>t;

    while (t--)
    {
        ll n; cin>>n;

        ll ans = 1;

        for (int i = 1; i <=n; i++)
        {
            ans = (ans*2)%MOD;
        }

        cout<<ans<<endl;
        



        
    }
    

    return 0;
}