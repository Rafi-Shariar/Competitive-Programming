#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

   ll n; cin>>n;
   vector<pair<ll,ll>>v(n*2);

   for (ll i = 0; i < n*2; i++)
   {
      cin>>v[i].first;
      v[i].second = i+1;
   }

   sort(v.begin(),v.end());

   bool pos = true;

   for (ll i = 0; i < n*2; i+=2)
   {
     if( v[i].first != v[i+1].first){
        pos = false;
        break;
     }
   }

   if(!pos) cout<<-1<<endl;
   else
   {
     for (ll i = 0; i < n*2; i+=2)
     {
        cout<< v[i].second<<" "<<v[i+1].second<<endl;
     }
     
   }
   
   
   

    


    return 0;
}