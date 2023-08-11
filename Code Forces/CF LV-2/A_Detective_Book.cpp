#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

 int n; cin>>n;
 int arr[n+1];

 int c=0;

 for (int i = 1; i <= n; i++)
 {
    cin>>arr[i];
 }

 int i=1, j = i;
while(i<=n){
    c++;
    int mx = i;

    while (j<=n && i<=mx)
    {
        mx = max(mx,arr[i]);
        i++;
    }
    
 }

 cout<<c<<endl;
 

 
    


    return 0;
}