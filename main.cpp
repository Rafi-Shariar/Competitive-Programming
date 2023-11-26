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
    fast

    ll t=1;
    cin>>t;

    ll n; cin >> n;

    int c =0;


    while (t--)
    {
        ll v; cin >> v;

        if( v % n == 0) c++;
        
    }

    cout << c << endl;
    

    return 0;
}