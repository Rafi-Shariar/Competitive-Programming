#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

  string s; cin>>s;

 
    int sz = s.size();
    string ans;
    for (int i = 0; i < sz-1; i++)
    {
        ans += s[i];
    }

    reverse(ans.begin(),ans.end());


    cout<<s<<ans<<endl;
    
  
  

    


    return 0;
}