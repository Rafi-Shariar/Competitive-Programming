#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   int k,l;
   cin>>k>>l;

   int c=0;

   while (l>=k && l%k==0)
   {
     c++;
     l = l/k;
   }

   if(l>1) cout<<"NO"<<endl;
   else cout<<"YES"<<endl<<c-1<<endl;
   
   
    


    return 0;
}