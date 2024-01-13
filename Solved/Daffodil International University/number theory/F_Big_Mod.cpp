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

//https://vjudge.net/contest/603667#problem/F
ll bigMod(ll b, ll p, ll m) {


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

     ll b,p,m;

    while (cin >> b >> p >> m)
    {
       
       cout << bigMod(b,p,m) << endl;
    }
    

    return 0;
}