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

void solve(int i, int n, vector<int>&v,  set<vector<int>>&ans, vector<int>&tmp){

    if(i==n){
        ans.insert(tmp);
        return;
    }

    tmp.push_back(v[i]);
    solve(i+1, n, v, ans, tmp);

    tmp.pop_back();
    solve(i+1, n, v, ans, tmp);
}
int main()
{
    fast();

    int t=1;
    //cin>>t;

    while(t--)
    {
        vector<int>v = {4,4,4,1,4};

        int n = v.size();

        vector<int>tmp;
        set<vector<int>>ans;
        solve(0,n,v,ans,tmp);

        vector<vector<int>>sol;

        for(auto i : ans){

            sol.push_back(i);
        }


    
          debug(sol);
        
    }

    return 0;
}