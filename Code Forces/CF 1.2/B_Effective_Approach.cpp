#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll n; cin>>n;
    map<ll,ll>mp;
    
    for (ll i = 1; i <= n; i++)
    {
        ll a; cin>>a;
        mp[a]=i;
    }

    ll q;
    cin>>q;

    ll a=0,b=0;

    while (q--)
    {
        int m; cin>>m;

        a += mp[m];
        b += (n - mp[m]) + 1;
    }

    cout<<a<<" "<<b<<endl;
    
    
    


    return 0;
}