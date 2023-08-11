#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   int n; cin>>n;
   vector<int>v(n);

   for(int i=0; i<n; i++) cin>>v[i];

   int mx = INT_MAX;

  for (int i = 1; i < n-1; i++)
  {
    int tmp = INT_MIN;
    priority_queue<int>q;

    for (int j = 0; j < n; j++)
    {
        if(j==i) continue;

        if( q.empty()) q.push(v[j]);
        else
        {   
            tmp = max(tmp, (v[j]-q.top()));
            q.push(v[j]);
        }
        
    }

    mx = min(mx,tmp);

  }

  cout<<mx<<endl;
  
    


    return 0;
}