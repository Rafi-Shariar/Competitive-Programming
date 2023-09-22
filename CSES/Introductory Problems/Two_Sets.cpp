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



int main()
{
    fast;

    int t=1;
    //cin>>t;

    while (t--)
    {

        ll n; cin>>n;

        ll sum = (n*(n+1))/2;

        if(sum & 1){
            cout<<"NO"<<endl;
            return 0;
        }

        vector<ll>v1,v2;
        ll freq[n+1] ={true};

        ll target = sum/2;

        for (ll i = n; i >=1; i--)
        {
            if(i<=target && target>0){
                v1.push_back(i);
                freq[i] = false;
                target -= i;
            }
            else v2.push_back(i);
            
        }

        // sort(v1);
        // sort(v2);

        cout<<"YES"<<endl;
        
        // if(v1.size()> 0)
        {
        cout<<v1.size()<<endl;
        for(auto i : v1) cout<<i<<" ";
        cout<<endl;
        }

        // if(v2.size()>0)
        {
        cout<<v2.size()<<endl;
        for(auto i : v2) cout<<i<<" ";
        cout<<endl;
        }



        
        
    }
    

    return 0;
}