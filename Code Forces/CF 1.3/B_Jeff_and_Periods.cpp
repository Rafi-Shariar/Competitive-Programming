#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   int n; cin>>n;
   map<ll,vector<ll>>mp;
   set<ll>s;

   for (int i = 1; i <= n; i++)
   {
     ll a; cin>>a;
     mp[a].push_back(i);
     s.insert(a);
   }

   vector<pair<int,int>>v;

   for(auto i : s){
     
     if(mp[i].size()==1) v.push_back({i,0});
     else
     {
        set<ll>tmp;
        for (int j = 1; j < mp[i].size(); j++)
        {
            tmp.insert( (mp[i][j] - mp[i][j-1]));
        }

        if(tmp.size()==1){

            auto it = tmp.begin();
            v.push_back({i,*it});
        }
        
     }
     
   }

   cout<<v.size()<<endl;
   for(auto i : v) cout<<i.first<<" "<<i.second<<endl;




   

    


    return 0;
}