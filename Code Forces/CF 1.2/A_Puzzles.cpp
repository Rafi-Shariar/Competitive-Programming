#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

  int n,k;
  cin>>n>>k;

  vector<int>v(k);

  for(int i = 0; i <k; i++ ) cin>>v[i];

  sort(v.begin(),v.end());

  int mx = v[n-1] - v[0];

  for (int i = 1; i <= k-n; i++)
  {
    mx = min(mx, v[i+n-1] - v[i]);
     
  }

  if(mx==INT_MAX) mx = 0;

  cout<<mx<<endl
  ;
  


    return 0;
}