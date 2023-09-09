#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int>freq(4001,0);
bool edge[4001][4001]={false};
int main(){

  int n,m; 
  cin>>n>>m;

 


  for (int i = 0; i < m; i++)
  {
     int a,b;
     cin>>a>>b;

     edge[a][b] = true;
     edge[b][a] = true;
     freq[a]++;
     freq[b]++;
     
  }

//   for( int i=1; i<=n; i++) cout<<freq[i]<<" ";

//   for (int i = 0; i <=n; i++)
//   {
//     for (int j = 0; j <= n; j++)
//     {
//         if(edge[i][j]) cout<<1;

//     }
//     cout<<endl;
    
//   }
  

  int mx = INT_MAX;

  for (int i = 1; i <= n; i++)
  {
    for (int j = i+1; j <= n; j++)
    {
        if(edge[i][j]){

            for (int k = j+1; k <= n; k++)
            {
                if(edge[i][k] && edge[j][k]){

                    mx = min(mx, (freq[i]+freq[j]+freq[k]));
                }
            }
            
        }
    }
    
  }

  if(mx == INT_MAX) cout<<-1<<endl;
  else cout<<mx-6<<endl;
  
  




    return 0;
}