#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool fun(pair<int,int>i,pair<int,int>j,pair<int,int>k){

    int a = (i.second - j.second ) * (i.first - k.first);
    int b = (i.second - k.second) * (i.first - j.first);

    if(a==b) return true;
    else return false;
}
int main(){

   int n; cin>>n;
   vector<pair<int,int>>v(n);

   for (int i = 0; i < n; i++)
   {
     int x,y;
     cin>>x>>y;

     v[i]={x,y};
   }

   bool found = false;


   for (int i = 0; i < n; i++)
   {
     for (int j = i+1; j < n; j++)
     {
        for (int k = j+1; k < n; k++)
        {
            if( fun( v[i], v[j],v[k])){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
        
     }
     
   }

   cout<<"No"<<endl;
   

   


    return 0;
}