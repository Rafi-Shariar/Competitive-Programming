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

map<int,bool>mp;
void prime(){


    mp[2] = true;  mp[3] = true;  mp[5] = true;  mp[7] = true;  mp[11] = true;  mp[13] = true;  mp[17] = true;  
    mp[19] = true;  mp[23] = true;  mp[29] = true;  mp[31] = true;  mp[37] = true;  
    
}
bool clear_bhai(vector<int>&ds){

    for (int i = 0; i < ds.size()-1; i++)
    {
        int sum = ds[i] + ds[i+1];
        if( mp[sum] == false ) return false;
    }

     if( mp[ds[ds.size()-1] + ds[0] ] == false ) return false;

    return true;
    
}
 void solve(int n, vector<int>&v, vector< vector<int>>&ans, vector<int>&ds, map<int, bool>&mp){

    if(ds.size()==n){

        if(ds[0] == 1 && clear_bhai(ds)) ans.push_back(ds);
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
   // fast

    int n;
    int t=1;

    prime();

    while (cin >> n)
    {

        vector<int>v(n);
        for(int i=0; i<n; i++) v[i] = i+1;

        vector< vector<int> > ans;
        vector<int>ds;
        map<int,bool>mp;

        solve(n, v, ans, ds, mp);

        printf("Case %d:\n",t++);
       
       for(auto i : ans){

        for(auto j : i) cout << j << " ";
        cout << endl;
       }
        



        
    }
    

    return 0;
}