#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

  int n; cin>>n;

  priority_queue<ll>pq;

  for (int i = 0; i < n; i++)
  {
     ll a; cin>>a;
     //if(a<0) a*=-1;
     pq.push(a);
  }

  while (!pq.empty())
  {
    ll val = sqrt(pq.top());

    if(val*val != pq.top()){
        cout<<pq.top()<<endl;
        return 0;
    }

    pq.pop();
  }
  


  

  


    return 0;
}