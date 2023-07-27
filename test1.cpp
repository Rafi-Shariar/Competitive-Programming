#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n; cin>>n;
    int arr[n][n];

    int mn = INT_MAX;
    int mx = INT_MIN;


    for( int i=0; i<n; i++){
       for( int j=0; j<n; j++) {
        cin>>arr[i][j];
        mn = min(mn,arr[i][j]);
        mx = max(mx,arr[i][j]);

       }
    }

    int x = arr[0][0];
    int y = arr[n-1][n-1];

    for(int i=mn; i<=mx; i++) cout<<i<<" ";
    cout<<endl;


    return 0;
}