#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   int n; cin>>n;
   vector<int>v(n);
   int sum = 0;

   for (int i = 0; i < n; i++)
   {
      cin>>v[i];
      sum += v[i];
   }

   int c = 0;

   for (int i = 0; i < n; i++)
   {
     int cur = sum - v[i];
     if(cur%2==0) c++;
   }

   cout<<c<<endl;
   
   


    return 0;
}