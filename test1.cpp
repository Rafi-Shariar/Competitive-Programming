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

bool solve(ll n, ll now){

    if(now>n) return false;

    if(now==n){
        return true;
    }

    return solve(n, now*10) || solve(n, now*20);
  
   
}
int main()
{
    fast();

    int t=1;
    cin>>t;

    while(t--)
    {
        ll n; cin>>n;

        int pos = 0;

        if(solve(n,1)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

        // if(pos) cout<<"YES"<<endl;
        // else cout<<"NO"<<endl;

       
         
    }

    return 0;
}