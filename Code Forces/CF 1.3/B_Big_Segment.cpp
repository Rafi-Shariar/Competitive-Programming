#include<bits/stdc++.h>
using namespace std;
#define ll long long int
bool comp( pair<int,int>x, pair<int,int>y){

    if(x.first == y.first) return x.second > y.second;

    return x.first < y.first;
    
}
int main(){

    int n; cin>>n;

   vector<pair<int,int>>v(n);

   for (int i = 0; i < n; i++)
   {
     cin>>v[i].first>>v[i].second;
   }

   vector<pair<int,int>>tmp = v;


   sort(v.begin(),v.end() , comp);

   int a = v[0].first; 
   int b = v[0].second;

   for (int i = 1; i < n; i++)
   {

    int c = v[i].first;
    int d = v[i].second;

    if(a<=c && c<=d && d<=b) continue;
    else{
      cout<<-1<<endl;
      return 0;
    }
     
   }

   for (int i = 0; i < n; i++)
   {

    if(tmp[i].first == a && tmp[i].second==b){
      cout<<i+1<<endl;
      return 0;
    }

     
   }

   
   
   


   
   



    return 0;
}