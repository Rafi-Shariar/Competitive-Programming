#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll n,k;
    cin>>n>>k;

    n = n - (n%k);

   ll ans = n/k;

   if(ans & 1) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;


    return 0;
}