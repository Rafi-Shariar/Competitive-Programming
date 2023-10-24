#include <bits/stdc++.h>
using namespace std;
#define ll         long long int
#define sort(x)    sort(x.begin(),x.end())
#define forin(x,n)  for(int i=0; i<n; i++) cin>>x[i];
#define endl       "\n"
#define fast       ios_base::sync_with_stdio(0); cin.tie(0) ; cout.tie(0);
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif


//https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/I
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
      int n,x,y;
      cin>>n>>x>>y;

      int arr [n][n];

      for( int i=0; i<n; i++ ){
        for(int j = 0; j<n; j++){
            cin>>arr[i][j];
        }
      }

      for( int i = 0 ; i<n; i++){

        swap ( arr[y-1][i] , arr[x-1][i]);
      }

       for( int i = 0 ; i<n; i++){

        swap ( arr[i][y-1] , arr[i][x-1]);
      }

      for( int i=0; i<n; i++ ){
        for(int j = 0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
      }
         
    }
    

    return 0;
}