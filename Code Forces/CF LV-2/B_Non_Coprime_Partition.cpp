#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

  int n; cin>>n;

  if(n<3){
    cout<<"No"<<endl;
    return 0;
  }

  vector<int>od;
  vector<int>ev;

  for (int i = 1; i <=n; i++)
  {
    if( i & 1){
        od.push_back(i);
    }
    else ev.push_back(i);
  }

  cout<<"Yes"<<endl;

  cout<<ev.size()<<" ";
  for(auto i : ev) cout<<i<<" ";
  cout<<endl;
  cout<<od.size()<<" ";
  for(auto i : od) cout<<i<<" ";
  cout<<endl;
  


    return 0;
}