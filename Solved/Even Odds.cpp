#include <bits/stdc++.h>
using namespace std;
#define ll         long long int
#define sort(x)    sort(x.begin(),x.end())
#define forin(x,n)  for(int i=0; i<n; i++) cin>>x[i];
#define endl       "\n"
#define fast       ios_base::sync_with_stdio(0); cin.tie(0) ; cout.tie(0);
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif


int main(){

   ll n,k;
   cin>>n>>k;

   ll odd_half = n/2;
   
   if(n % 2 == 1) odd_half++;

   if(k<=odd_half){

     ll c=2;
     ll i=1;
     while (c<=k)
     {
       // cout<<i<<endl;
        i+=2;
        c++;
     }

     cout<<i<<endl;
     
   }
   else
   {
     ll c = odd_half+2;
     ll i=2;

     while (c<=k)
     {
        i+=2;
        c++;
     }

     cout<<i<<endl;
     
   }
   
    


    return 0;
}