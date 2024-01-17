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

//https://vjudge.net/contest/603526#problem/J
bool pos( ll x , vector<int>&v , ll h){

    ll c = 0;
    ll mx = -1;

    for (int i = 0; i < v.size(); i++)
    {
        ll reached = (v[i] + x) - 1;

        ll sec = reached - v[i] + 1;

        if( v[i] <= mx){

            sec = reached - mx;
            
        }

        debug(x, sec);

        c+=sec;
        mx = max(mx,reached);

        
    }

    return c>=h;
    
}
int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        ll n,h;
        cin >> n >> h;
        vector<int>v(n);
        forin(v,n);

        ll low  = 0, high = h , ans = 0;;

        while (low<=high)
        {
            ll mid = low + (high - low)/2;

            if(pos(mid, v,h)) {
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }

        cout << ans << endl;
        
        


    }
    

    return 0;
}