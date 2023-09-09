#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   int n,k;
   cin>>n>>k;

   vector<int>v(n+1);

   for(int i=1; i<=n; i++) cin>>v[i];

   bool pos = true;

   int val = v[k];

   for (int i = k; i <= n; i++)
   {
     if(v[i]==val) continue;
     else pos = false;
   }

   if(!pos){
    cout<<-1<<endl;
    return 0;
   }
   else
   {
    int idx=0;

    for (int i = 1; i <= n; i++)
    {
        if(v[i] != v[n]) idx = i; 
    }

    if(idx>k) cout<<-1<<endl;
    else cout<<idx<<endl;
    
   }
   
   

    


    return 0;
}