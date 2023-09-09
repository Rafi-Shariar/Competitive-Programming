#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   int n,m;
   cin>>m>>n;

   int a[m][n];
   int b[m][n];
   int c[m][n];


   for(int i=0; i<m; i++){
      for(int j=0; j<n; j++){
        
        cin>>a[i][j];
        b[i][j] = 1;
        c[i][j] = 0;
      }
   }

   for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){

        if(a[i][j]==0){

            for(int x = 0; x<n; x++) b[i][x] = 0;
            for(int x = 0; x<m; x++) b[x][j] = 0;
            
        }
    }
   }


   for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){

        if(b[i][j]){

            for(int x = 0; x<n; x++) c[i][x] = 1;
            for(int x = 0; x<m; x++) c[x][j] = 1;
            
        }
    }
   }



   for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){

       if(c[i][j] != a[i][j]){
        cout<<"NO"<<endl;
        return 0;
       }
    }
   }


   cout<<"YES"<<endl;

      for(int i=0; i<m; i++){
         for(int j=0; j<n; j++){

         cout<<b[i][j]<<" ";
        }
        cout<<endl;
      }


   

    


    return 0;
}