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


//https://vjudge.net/contest/603667#problem/I
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        ll value = 998244353;

        ll n; cin >> n;

        ll ans = n % value;

        if( ans < 0) ans = ans + value;

        cout << ans << endl;

        
    }
    

    return 0;
}