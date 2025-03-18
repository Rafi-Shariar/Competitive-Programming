#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   int n;
   string s;
   cin>>n>>s;

   ll ans = n;
   int k = s.size();

   if( n%k != 0){

    int i=1;
   

    while (n - (i*k) >=(n%k))
    {
        ans *= n - (i*k);
        i++;
    }

   }
   else
   {
     int i=1;
   

    while (n - (i*k) >=k)
    {
        ans *= n - (i*k);
        i++;
    }
   }
   

    cout<<ans<<endl;
    
    
   
    


    return 0;
}