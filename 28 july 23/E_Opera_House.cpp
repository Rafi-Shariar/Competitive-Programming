#include<bits/stdc++.h>
using namespace std;
#define ll long long int
// ll lucas(ll n){

//     if(n==0) return 2;
//     if(n==1) return 1;

//     return lucas(n-1) + lucas(n-2);
// }
ll lucas(ll n){


    if(n==0) return 2;
    if(n==1) return 1;

    ll a = 2,b=1,c;

    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    return c;
    
}
int main(){

    ll n; cin>>n;

    cout<<lucas(n)<<endl;


    return 0;
}