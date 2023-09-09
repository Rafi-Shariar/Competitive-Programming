#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

  char v[9][9];

  for(int i=1; i<=8; i++)
     for(int j=1; j<=8; j++) cin>>v[i][j];

    
    int bl=INT_MAX;

    for (int i = 8; i >= 1; i--)
    {
        for (int j = 8; j>=1; j--)
        {
            if(v[j][i]=='W') break;
            if(v[j][i] == 'B' ){

                bl = min(bl, 8 -j);
            }
        }
        
    }

    int wt = INT_MAX;
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            if(v[j][i]=='B') break;
            if(v[j][i]=='W'){
                wt = min(wt,j-1);
            }
        }
        
    }

   // cout<<wt<<" "<<bl<<endl;

    if(wt<=bl) cout<<"A"<<endl;
    else cout<<"B"<<endl;
    



    
    
    return 0;
}