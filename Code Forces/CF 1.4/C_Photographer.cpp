#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

  ll n,memo;
  cin>>n>>memo;

  int l,h;
  cin>>l>>h;

  vector<pair<ll,ll>>v;

  for (int i = 1; i <= n; i++)
  {
    ll a,b;
    cin>>a>>b;

    ll sum = (a*l) + (b*h);

    v.push_back({sum,i});

  }

  sort(v.begin(),v.end());

  int c=0;
  vector<int>ans;

  for (int i = 0; i < n; i++)
  {
    if(v[i].first<=memo){
        c++;
        memo-=v[i].first;
        ans.push_back(v[i].second);
    }
  }

  cout<<c<<endl;
  for(auto i : ans) cout<<i<<" ";
  cout<<endl;
  
  


    


    return 0;
}