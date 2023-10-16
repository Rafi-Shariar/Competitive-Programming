#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n; cin>>n;
    int arr[n][n];

    for( int i=0; i<n; i++)
       for( int j=0; j<n; j++) cin>>arr[i][j];

    cout<<arr[0][0]<<" ";

    int i=1, j=0;

    while (i<n && j<=n-1)
    {
        int x = j, y = i;
        int ii = i, jj = j;

        while ( ii>=x && jj<=y)
        {
            cout<<arr[ii][jj]<<" ";
            ii--;
            jj++;
        }

        if( i < n-1) i++;
        else j++;
        
    }

  
    




    


    


    return 0;
}