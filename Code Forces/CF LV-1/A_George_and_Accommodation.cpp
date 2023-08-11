#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   int n; cin>>n;
   int c=0;

   while (n--)
   {
     int a,b;
     cin>>a>>b;

     int x = b-a;

     if(x>=2) c++;

   }

   cout<<c<<endl;
   
    


    return 0;
}