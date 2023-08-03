#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   int a,b,c;
   cin>>a>>b>>c;

   int mn = min(a+2, min(b+1,c));
   //cout<<mn<<endl;

   cout<<mn + (mn-1) + (mn-2)<<endl;
   
   



    return 0;
}