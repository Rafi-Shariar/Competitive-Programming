#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   int n; cin>>n;

   vector<int>v(n);

   for( int i=0; i<n; i++) cin>>v[i];

   int need = n/2 + 1;

   sort(v.begin(),v.end());

   int sum = 0;

   for (int i = 0; i < need; i++)
   {
      sum += ( (v[i]/2) + 1 );
   }

   cout<<sum<<endl;
   
    


    return 0;
}