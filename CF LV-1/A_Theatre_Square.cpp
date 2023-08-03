#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   ll l,w,t;
   cin>>l>>w>>t;

   ll ans = 0;
  

   if( l%t==0 ){
    ans += l/t;
   }else
   {
    ans += (l/t) + 1;
   }

   w = w-t;
   ll x=0;

   if(w>0){

    if(w%t==0) x += w/t;
    else x += (w/t) + 1;

   }

   ll total = ans + (ans*x);
   cout<<total<<endl;




    return 0;
}