#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   ll n,k;
   cin>>n>>k;
   vector<ll>fre(27,0);
   string s; cin>>s;

   for (int i = 0; i < n; i++)
   {
     char a=s[i];
     fre[a-'A']++;

   }

   sort(fre.begin(), fre.end());
   ll sum = 0;

   for (int i = 26; i >=0 && k; i--)
   {
      if(k>fre[i]){
        k -= fre[i];
        sum += fre[i]*fre[i];
      }
      else
      {
        sum += k*k;
        break;
      }
      
   }

   cout<<sum<<endl;
   
  
   
   


    


    return 0;
}