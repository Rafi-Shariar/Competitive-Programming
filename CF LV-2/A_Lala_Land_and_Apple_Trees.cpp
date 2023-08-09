#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   int n; cin>>n;
   vector<pair<int,int>>pos,neg;

   for (int i = 0; i < n; i++)
   {
     int a,b;
     cin>>a>>b;

     if(a>0) pos.push_back({a,b});
     else neg.push_back({a,b});
   }

   ll sum = 0;

   if(pos.size() == neg.size()){

    for (int i = 0; i < pos.size(); i++)
    {
        sum += pos[i].second;
        sum += neg[i].second;
    }
    
   }else
   {
     sort(pos.begin(),pos.end());
     sort(neg.rbegin(), neg.rend());

     if(pos.size() > neg.size()){

        for (int i = 0; i < neg.size(); i++)
        {
            sum += pos[i].second;
            sum += neg[i].second;
        }

        sum += pos[ neg.size()].second;
        
     }
     else
     {
        for (int i = 0; i < pos.size(); i++)
        {
            sum += pos[i].second;
            sum += neg[i].second;
        }

        sum += neg[pos.size()].second;
     }
     
   }

   cout<<sum<<endl;
   
   


    return 0;
}