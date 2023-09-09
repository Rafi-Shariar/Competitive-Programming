#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   ll n,m;
   cin>>n>>m;

   if(n==0 && m==0) cout<<n<<" "<<n<<endl;
   else if(n==0) cout<<"Impossible"<<endl;
 
   else
   {
     if(m==0) cout<<n<<" "<<n<<endl;
     else{

     ll mx = n+m-1;
     ll mn = n+m - min(n,m);

     cout<<mn<<" "<<mx<<endl;
     }

   }
   
    


    return 0;
}