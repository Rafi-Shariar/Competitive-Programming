#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   int n; cin>>n;
   vector<ll>v(n);

   int od=0,ev=0;

   for (int i = 0; i < n; i++)
   {
     cin>>v[i];
     
     if(v[i] & 1) od++;
     else ev++;

   }

   if(od > 0) cout<<"First"<<endl;
   else cout<<"Second"<<endl;

   
   
    


    return 0;
}