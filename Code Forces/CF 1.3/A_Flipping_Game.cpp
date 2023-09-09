#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   int n ; cin>>n;

   int ans = 0,c=0;
   int mx = INT_MIN;
   
   for (int i = 0; i < n; i++)
   {
     int a; cin>>a;

     if(a==0) ans++;
     else
     {
        ans--;
        c++;
     }

     mx = max(mx,ans);

     if(ans<0) ans = 0;


   }

   cout<<c+mx<<endl;
   
    


    return 0;
}