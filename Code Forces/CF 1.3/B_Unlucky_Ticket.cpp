#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

  int n; cin>>n;
  string s1; cin>>s1;
  string s = s1.substr(0,n);
  string tmp = s1.substr(n,2*n);
  reverse(tmp.begin(), tmp.end());

  sort(s.begin(),s.end());
  sort(tmp.begin(), tmp.end());

 // cout<<tmp<<endl;

  bool gtr = true, sml = true;

  for (int i = 0; i < n; i++)
  {
    if(s[i]>=tmp[i]) gtr = false;
  }

    for (int i = 0; i < n; i++)
  {
    if(s[i]<=tmp[i]) sml = false;
  }

  if(gtr || sml) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;


  

  


  
    


    return 0;
}