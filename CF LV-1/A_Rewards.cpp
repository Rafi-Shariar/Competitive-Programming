#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   int cups = 0;
   
   for (int i = 0; i < 3; i++)
   {
     int a; cin>>a;
     cups += a;
   }

   int medals = 0;
    for (int i = 0; i < 3; i++)
   {
     int a; cin>>a;
     medals += a;
   }

   int n; cin>>n;

   int x = cups/5;
   if(cups%5 != 0) x += 1;

   int y = medals/10;
   if( medals%10 != 0) y += 1;

   if(x+y <= n) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;

   
    


    return 0;
}