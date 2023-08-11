#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   int n; cin>>n;
   vector<int>a(n);
   for(int i=0; i<n; i++) cin>>a[i];

   int m; cin>>m;
   vector<int>b(m);
   for(int i=0; i<m; i++) cin>>b[i];

   map<int,int>mp;
   int mx = INT_MIN;

   for (int i = 0; i < m; i++)
   {
     for (int j = 0; j < n; j++)
     {
        if( b[i] % a[j]==0){
            int val = b[i]/a[j];
            mp[val]++;

            mx = max(mx,val);
        }
     }
     
   }

   cout<<mp[mx]<<endl;
   
    


    return 0;
}