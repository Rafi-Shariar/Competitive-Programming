#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   int n,m;
   cin>>n>>m;

   char v[n+1][m+1];
     for (int i = 1; i <= n; i++)
    {
     for (int j = 1; j <= m; j++)
     {
         if(i%2==1 && j%2==1) v[i][j] = 'B';
         else if ( i % 2==1 && j%2==0) v[i][j] = 'W';

         if(i%2==0 && j%2==1) v[i][j] = 'W';
         else if(i%2==0 && j%2==0) v[i][j] = 'B';

     }  
    }

   for (int i = 1; i <= n; i++)
   {
     for (int j = 1; j <= m; j++)
     {
        char c; cin>>c;

        if(c=='-') v[i][j] = '-'; 
     }  
   }

     for (int i = 1; i <= n; i++)
   {
     for (int j = 1; j <= m; j++)
     {
        cout<<v[i][j];
     }  
     cout<<endl;
   }

   

  

   


   



    return 0;
}