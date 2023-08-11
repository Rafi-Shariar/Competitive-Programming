#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool comp( pair<int,int>x, pair<int,int>y){

    if(x.first == y.first) return x.second > y.second;

    return x.first < y.first;
    
}
int main(){

   int n,k;
   cin>>n>>k;

   vector<pair<int,int>>v(n);

   for (int i = 0; i < n; i++)
   {
     cin>>v[i].first>>v[i].second;
   }

   sort(v.rbegin(), v.rend() , comp);

   int sol = v[k-1].first;
   int pon = v[k-1].second;

   int c=0;

   for (int i = 0; i < n; i++)
   {
     int curs = v[i].first;
     int curp = v[i].second;

     if(curs == sol && curp==pon) c++;

   }

   cout<<c<<endl;
   
    


    return 0;
}