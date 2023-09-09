#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   ll n,a,b,c;
   cin>>n>>a>>b>>c;

   ll c1 = n/a;
   ll res = n - (c1*a);
   ll c2=0;
   

   if(res>=b){
    c1 += (res-b)/(b-c) + 1;
   }

   if(n>=b){

    c2 += (n-b)/(b-c) + 1;
    n = (n-b)%(b-c) + c;

   }

   if(n>=a) c2 += n/a;

   //cout<<c1<<" "<<c2<<endl;

   cout<<max(c1,c2)<<endl;

    


    return 0;
}