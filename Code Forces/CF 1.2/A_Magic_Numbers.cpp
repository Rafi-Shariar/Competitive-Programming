#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

  string s; cin>>s;
  bool pos = true;

  for (int i = 0; i < s.size(); i++)
  {
     if(s[i] == '1' || s[i]=='4'){
       continue;
     }
     else pos = false;
  }

  if(s[0] != '1'){
    pos = false;

  }

  if( s.find("444") != string :: npos) {
    pos = false;
  }

  if(pos) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
  
  
    


    return 0;
}