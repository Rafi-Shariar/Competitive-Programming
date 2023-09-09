#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   ll a,b,n;
   cin>>a>>b>>n;

   bool pos = false;

   for (int i = 0; i <=9; i++)
   {
      ll cur = (a*10) + i;

      if(cur % b ==0){
        cout<<cur;
        string s(n-1,'0');
        cout<<s<<endl;
        pos = true;
        break;
      }
   }

   if(!pos) cout<<-1<<endl;


   
    


    return 0;
}