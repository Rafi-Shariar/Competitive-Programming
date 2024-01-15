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


bool check(vector<ll>&v, ll range){

    ll i=0, j=0;

    ll mn = INT_MAX;
    ll mx = INT_MIN;

    ll cur = 0;

    while (j<v.size())
    {
        mn = min(mn,v[j]);
        mx = max(mx, v[j]);
        int dif = mx - mn;

        if( dif <= 1){
            j++;
            cur = max(cur,(j-i));
        }
        else
        {
            i++;
            mn = v[i];

            if( i > j){

                i = j;
                mn = v[i];
                mx = v[i];
            }
        }

        //cout << range<< " " << cur << endl;
        
    }

    //cout << range << "----" << cur << endl;

    return cur >= range;
    
}
ll BS(vector<ll>&v){

    ll low = 0 , high = v.size();

    while (low <= high)
    {
        ll mid = low + (high - low)/2;

        if(check(v,mid)) low = mid + 1;
        else high = mid - 1;
    }

    //cout << low << " " << high << endl;

    return low-1;
    

}
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n; cin >> n;
        vector<ll>v(n);
        forin(v,n);

        cout << BS(v) << endl;
        
    }
    

    return 0;
}