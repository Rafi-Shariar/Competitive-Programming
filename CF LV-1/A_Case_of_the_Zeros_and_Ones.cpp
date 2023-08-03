#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

  int n; cin>>n;

  stack<char>s;

  for (int i = 0; i < n; i++)
  {
    char a; cin>>a;

    if(s.empty()) s.push(a);
    else
    {
        if(s.top()!=a ){
            s.pop();
        }
        else s.push(a);
    }
    
  }

  cout<<s.size()<<endl;
  


    return 0;
}