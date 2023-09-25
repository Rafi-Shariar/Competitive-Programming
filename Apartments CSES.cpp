#include <bits/stdc++.h>
using namespace std;
#define ll         long long int
#define sort(x)    sort(x.begin(),x.end())
#define endl       "\n"
#define fast       ios_base::sync_with_stdio(0); cin.tie(0) ; cout.tie(0);
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif


bool binary_search(vector<ll>&ap, ll cur,int m,int k, map<ll,ll>&mp){

    int low = 0, high = m-1;

    while (low<=high)
    {
        ll mid = (low+high)/2;

        if(ap[mid] == cur && mp[ap[mid]]>0) return true;

        if( abs(ap[mid+1] - cur)<=k && mp[ap[mid+1]]>0) return true;
        if( abs( ap[mid-1] - cur) <= k && mp[ap[mid-1]]>0) return true;

        if( ap[mid]>cur ) high = mid - 1;
        else low = mid + 1;
    }

    return false;
    
}
int main()
{
    fast;

    int t=1;
    //cin>>t;

    while (t--)
    {

        int n,m,k;
        cin>>n>>m>>k;
        map<ll,ll>mp;
        vector<ll>v(n);
        vector<ll>ap(m);
        for(int i=0; i<n; i++) cin>>v[i];

        for(int i=0; i<m; i++){
            cin>>ap[i];
            mp[ ap[i] ]++;
   
        }

        sort(ap);

        int c = 0;

        for (int i = 0; i < n; i++)
        {
            ll cur = v[i];

            bool ok  = binary_search(ap,cur,m,k,mp);
            if(ok){
                c++;
                mp[cur]--;
            }
        }

        cout<<c<<endl;
        


        
    }
    

    return 0;
}