#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   int a,b;
   cin>>a>>b;

   if(a==1){
    cout<<1<<endl;
   }
   else
   {
      int x = b - 1;
      int cur = a-b;

      if(x<cur) cout<<b+1<<endl;
      else cout<<b-1<<endl;
   }
   

    


    return 0;
}