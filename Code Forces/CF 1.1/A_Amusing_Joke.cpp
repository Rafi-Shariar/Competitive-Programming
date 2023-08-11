#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   string a,b,c;
   cin>>a>>b>>c;

   string tmp = a+b;
   sort(tmp.begin(), tmp.end());
   sort(c.begin(),c.end());

   if(tmp==c) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
    


    return 0;
}