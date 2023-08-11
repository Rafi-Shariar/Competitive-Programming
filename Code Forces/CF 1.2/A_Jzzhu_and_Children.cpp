#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n,k;
    cin>>n>>k;

    deque<pair<int,int>>d;

    for (int i = 1; i <= n; i++)
    {
        int a; cin>>a;
        d.push_back({a,i});
        
    }

   while (d.size()!=1)
   {
      int cur = d.front().first;

      if(cur<=k) d.pop_front();
      else
      {
        cur = cur - k;
        int idx = d.front().second;

        d.pop_front();
        d.push_back({cur,idx});
      }
      
   }

   cout<<d.front().second<<endl;
   

    
    


    return 0;
}