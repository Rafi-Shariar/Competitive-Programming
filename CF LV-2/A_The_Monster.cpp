#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   ll a,b,c,d;
   cin>>a>>b>>c>>d;

   for (int i = 0; i <=1000; i++)
   {
     ll t1 = b + i*a;
     

     for (int j = 0; j <=1000; j++)
     {
        ll t2 = d + j*c;
       
       if(t1==t2){
        cout<<t1<<endl;
        return 0;
       } 
     }
     

     
   }

   cout<<-1<<endl;
   
    


    return 0;
}