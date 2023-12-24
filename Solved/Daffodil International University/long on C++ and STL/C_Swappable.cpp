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


//https://vjudge.net/contest/600885#problem/C
int main()
{
    fast

    int n; cin >> n;
    vector<int>v(n);
    map<int,int>mp;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }

    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        int val = v[i];

        mp[ val ] --;
        int rest = n - i - 1;

        ans += (rest - mp[val]);
    }

    cout << ans << endl;
    
    


    

    return 0;
}