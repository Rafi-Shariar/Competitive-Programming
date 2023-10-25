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
    //fast

   int t; cin>>t;
    
    for(int tt=1; tt<=t; tt++){
        
        int n,p,q;
        cin>>n>>p>>q;
        
        printf("Case %d: ",tt);
        
        vector<int>v(n);
        
        for(int i=0; i<n; i++)  cin>>v[i];
           
        sort(v);
        
        int c=0;
        int sum=0;
        
        for(int i=0; i<p && i<n; i++){
            
            sum += v[i];
            if(sum<=q) c++;
        }
        
        
        cout<<c<<endl;
        
    }


    return 0;
}