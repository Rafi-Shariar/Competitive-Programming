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


//https://www.spoj.com/problems/OLOLO/
int main()
{
    fast

    int n; cin >> n;
    vector<int>v(n);
    forin(v,n);
    sort(v);

    int ans = v[0];

    for (int i = 1; i < n; i++)
    {
        ans ^= v[i];
    }

    cout << ans << endl;
    
    

    return 0;
}