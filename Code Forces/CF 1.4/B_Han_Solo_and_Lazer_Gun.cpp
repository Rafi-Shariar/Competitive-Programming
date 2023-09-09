#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   int n,x,y;
   cin>>n>>x>>y;
   vector<pair<int,int>>v(n);

   for (int i = 0; i < n; i++)
   {
     cin>>v[i].first>>v[i].second;
   }

   bool freq[10000];
   int c=0;

   for (int i = 0; i < n; i++)
   {
     if(freq[i]) continue;
     c++;

     int x1 = v[i].first - x;
     int y1 = v[i].second - y;

     for (int j = 0; j < n; j++)
     {
        int x2 = v[j].first - x;
        int y2 = v[j].second - y;

        if( x2*y1 == x1*y2) freq[j] = true;
     }
     
   }

   cout<<c<<endl;
   
   
    


    return 0;
}