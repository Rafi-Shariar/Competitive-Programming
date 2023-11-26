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


//https://codeforces.com/problemset/problem/433/B
int main()
{
    fast

    int n; cin >> n;
    vector<ll>v(n);
    forin(v,n);

    ll pre[n]={0} ,sopre[n] = {0};

    pre[0] = v[0];

    for(int i=1; i<n; i++ ) pre[i] = pre[i-1] + v[i];
    sort(v);

    sopre[0] = v[0];
    for(int i=1; i<n; i++) sopre[i] = sopre[i-1] + v[i];

    int q; cin >> q;

    while (q--)
    {
        int x,a,b;
        cin >> x >> a >> b;
        a--, b--;

        if( x == 1 ){

            if(a==0) cout << pre[b] << endl;
            else cout << pre[b] - pre[a-1] << endl;

        }
        else
        {
            if( a==0) cout << sopre[b] << endl;
            else cout << sopre[b] - sopre[a-1] << endl;
        }
        
     
    }
    
    

    return 0;
}