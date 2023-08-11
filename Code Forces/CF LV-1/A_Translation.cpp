#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

  string s; cin>>s;
  string s2; cin>>s2;

  reverse(s.begin(),s.end());

  for (int i = 0; i < s.size(); i++)
  {
    if(s[i]!=s2[i]){

        cout<<"NO"<<endl;
        return 0;

    }

  }

  cout<<"YES"<<endl;
  
  return 0;
}