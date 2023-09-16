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

void solve(int n, vector<int>&v, vector< vector<int>>&ans, vector<int>&ds, map<int, bool>&mp){

    if(ds.size()==n){
        ans.push_back(ds);
         return;
    }
   
   for (int i = 0; i < n ; i++)
   {
       if(!mp[i]){

    ds.push_back(v[i]);
    mp[i] = true;
    solve( n, v, ans, ds, mp);
    ds.pop_back();
    mp[i] = false;

   }

   }
   
}
int main()
{
    fast();

    int t=1;
    //cin>>t;

    while(t--)
    {

        vector<int>v = {1,2,3};
        int n= v.size();
        map<int, bool>mp;
        vector< vector<int>>ans;
        vector<int>ds;

        solve(n, v, ans, ds, mp );

        debug(ans);
        
    }

    return 0;
}