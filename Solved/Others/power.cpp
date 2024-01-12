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



//https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_B
ll BigMod(ll b, ll p, ll m) {
    if (p == 0) return 1;
    
    ll result = 1;
    b %= m; 
    
    while (p > 0) {
     
        if (p % 2 == 1) result = (result * b) % m;
    
        b = (b*b) % m;
        p /= 2;
    }
    
    return result;
}
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        ll n,m;
        cin >> n >> m;

        ll mod = 1e9 + 7;

        cout << BigMod(n,m,mod) << endl;


    }
    

    return 0;
}