#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;
    ll sum=0;
    int n=t;

    while (t--)
    {
      ll a; cin>>a;
      sum+=a;  
    }

    if(sum%n==0) cout<<n<<endl;
    else cout<<n-1<<endl;

    


    return 0;
}