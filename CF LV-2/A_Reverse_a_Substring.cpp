#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   int n; cin>>n;
   string s; cin>>s;

   int x=0,y=0;

   for (int i = 0; i < s.size()-1; i++)
   {
     if(s[i]>s[i+1]){
        x=i+1;
        y=i+2;
        break;
     }
   }

   if(x==y) cout<<"NO"<<endl;
   else{
    cout<<"YES"<<endl;
    cout<<x<<" "<<y<<endl;
   }
   


    return 0;
}