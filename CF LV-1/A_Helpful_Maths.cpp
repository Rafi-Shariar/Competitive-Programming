#include<bits/stdc++.h>
using namespace std;
int main(){
 
  string s;
  cin>>s;
 
  vector<int>v;
 
  for (int i = 0; i < s.size(); i++)
  {
     if(s[i]=='+')continue;
 
     int a = (int)s[i]-48;
 
     v.push_back(a);
 
  }
 
  sort(v.begin(), v.end());
 
  for (int i = 0; i < v.size()-1; i++)
  {
     cout<<v[i]<<"+";
  }
  cout<<v[v.size()-1]<<endl;
  
 
 
  
 
 
    return 0;
}