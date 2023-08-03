#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

   int arr[11][11];

   for (int i = 1; i <= 10; i++)
   {
     for (int j = 1; j <= 10; j++)
     {
        if(i==1) arr[i][j] = 1;
        else if(j==1) arr[i][j] = 1;
        else
        {
            arr[i][j] = arr[i-1][j] + arr[i][j-1];
        }
        

     }
     
   }

   int n; cin>>n;

   cout<<arr[n][n]<<endl;
   
    


    return 0;
}