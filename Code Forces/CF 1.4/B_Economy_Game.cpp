#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   ll n; cin>>n;

   for (ll i = 0; i <=n; i+=1234567)
   {
      ll res  = n - i;

      for (int j = 0; j <= res; j+=123456)
      {
         ll cur = res - j;

         if(cur % 1234 == 0){
            cout<<"YES"<<endl;
            return 0;
         }
      }
      
   }

   cout<<"NO"<<endl;
   
    


    return 0;
}