#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
 
 
void fast(){
   ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
int main()
{
    fast();
 
    int t=1;
    //cin>>t;
 
    while(t--)
    {
        ll n; cin>>n;
        vector<ll>v(n);
 
        for( int i=0; i<n; i++) cin>>v[i];
 
        ll c=0;
 
        for (int i = 1; i < n; i++)
        {
            if(v[i-1] > v[i]){
                ll sum = v[i-1] - v[i];
                debug(v[i-1], v[i], sum)
                c +=(v[i-1] - v[i]);
                v[i] += sum;
 
 
 
            }
        }
 
        debug(v);
 
        cout<<c<<endl;
        
        
    }
 
    return 0;
}