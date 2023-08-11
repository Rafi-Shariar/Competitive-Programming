#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   int n,m; cin>>n>>m;
   char arr[n][m];

   bool color = false;

   for (int i = 0; i < n; i++)
   {
    for (int j = 0; j < m; j++)
    {
        cin>>arr[i][j];

        char c = arr[i][j];

        if(c!='W' && c!='G' && c!='B') color = true;
    }
    
   }

   if(color) cout<<"#Color"<<endl;
   else cout<<"#Black&White"<<endl;   
    


    return 0;
}