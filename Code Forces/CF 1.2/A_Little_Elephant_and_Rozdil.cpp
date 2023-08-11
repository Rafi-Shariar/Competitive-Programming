#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   int n; cin>>n;
   vector< pair<int,int>>v;

   for (int i = 1; i <= n; i++)
   {
     int a; cin>>a;
     v.push_back({a,i});
   }

   sort(v.begin(),v.end());

   if(v[0].first == v[1].first) cout<<"Still Rozdil"<<endl;
   else cout<<v[0].second<<endl;
   



    return 0;
}