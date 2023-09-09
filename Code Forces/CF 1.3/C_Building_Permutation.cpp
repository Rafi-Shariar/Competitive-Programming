#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

  int n; cin>>n;
  vector<ll>v(n);

  for (ll i = 0; i < n; i++)
  {
     cin>>v[i];
  }

  sort(v.begin(),v.end());
  //for(auto i : v) cout<<i<<" ";

  cout<<endl;

  ll ans = 0;

  for (ll i = 0; i < n; i++)
  {

  //  cout<<v[i]<<" "<<i+1<<" "<<abs(v[i] - i+1)<<endl;

    ans += abs(v[i] - (i+1));
   
   

  }
  cout<<ans<<endl;


  
  
    


    return 0;
}