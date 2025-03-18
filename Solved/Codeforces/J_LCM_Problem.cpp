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


//https://codeforces.com/problemset/problem/1389/A
int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        ll l,r;
        cin >> l >> r;

        ll a = l * (2*l) / __gcd(l , 2*l);

        if( a > r) cout << "-1 -1" << endl;
        else cout << l << " " << 2*l << endl;
    }
    

    return 0;
}
/*
 for x < y is has to be atleast 2x. 
    x < y >= 2x
 
 if lcm( x, 2x) > r then -1 

*/