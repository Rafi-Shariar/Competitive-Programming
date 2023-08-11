#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   int n; cin>>n;

   int freq[3011]={0};

   for (int i = 0; i < n; i++)
   {
      int a; cin>>a;
      freq[a]++;
   }

   int ans=0;

   for (int i = 1; i <=3010; i++)
   {
     if(freq[i]==0){
        ans = i;
        break;
     }
   }

   cout<<ans<<endl;
   
   


 
   
    


    return 0;
}