#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   int n; cin>>n;

  map<int,int>mp;

   vector<pair<int,int>>v;

   int three=0,two=0;

   for (int i = 0; i < n; i++)
   {
     int a; cin>>a;
     mp[a]++;
     v.push_back({a,i+1});
    
   }
  
   sort(v.begin(),v.end());

   vector<int>a(n),b(n),c(n);

   for(int i=0; i<n; i++) a[i] = v[i].second;

   bool sec = false, thi = false;
    
    int i=0;
   while ( i<n-1)
   {
     if( v[i].first == v[i+1].first){
        swap(v[i],v[i+1]);
         i++;
         sec = true;
        break;
     }
     i++;

   }

   if(!sec){
    cout<<"NO"<<endl;
    return 0;
   }

   for(int x=0; x<n; x++) b[x] = v[x].second;

   while (i<n-1)
   {
      if(v[i].first == v[i+1].first){
        swap(v[i],v[i+1]);
        thi = true;
        break;
      }
      i++;
   }

   if(!thi){
    cout<<"NO"<<endl;
    return 0;
   }

   cout<<"YES"<<endl;
   
   for(int x=0; x<n; x++) c[x] = v[x].second;

   for(auto x : a) cout<<x<<" ";
   cout<<endl;

 for(auto x : b) cout<<x<<" ";
   cout<<endl;

    for(auto x : c) cout<<x<<" ";
   cout<<endl;
   
   



   

    


    return 0;
}