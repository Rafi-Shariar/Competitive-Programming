#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   int n; cin>>n;
   vector<int>v(n);
   int c=0;

   int mn=INT_MAX, mx=INT_MIN;

   for (int i = 0; i < n; i++)
   {
    int a; cin>>a;

      if(i<1){
        mn = min(mn,a);
        mx = max(mx,a);
        continue;
      }

      if(a>mx){
        c++;
        //cout<<"-"<<a<<endl;
        mx = a;
      }
      else if(mn>a){
        c++;
       // cout<<a<<endl;
        mn = a;
      }


   }

   cout<<c<<endl;
   
    


    return 0;
}