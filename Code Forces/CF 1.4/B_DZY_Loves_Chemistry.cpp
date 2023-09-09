#include<bits/stdc++.h>
using namespace std;
#define ll long long int

const int N=1e5;
vector<bool>visited(N,false);
vector<ll>adj_list[N];

void DFS(ll node){

    visited[node] = true;

   for(auto adj_node : adj_list[node]){
      
       if(!visited[adj_node]) DFS(adj_node);
   }
    
}

int main(){

    ll n,m;
    cin>>n>>m;

    if(n==1){
        cout<<1<<endl;
        return 0;
    }

    for (int i = 0; i < m; i++)
    {
        ll a,b;
        cin>>a>>b;

        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    ll c=0;

    for (ll i = 1; i <= n; i++)
    {
        if( !visited[i]){
            c++;
            DFS(i);
        }
    }

   cout<<(ll)pow(2,n-c)<<endl;
    
    

    return 0;
}