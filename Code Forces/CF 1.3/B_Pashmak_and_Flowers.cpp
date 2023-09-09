#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll n; cin>>n;
    map<ll,ll>mp;
    ll mn  = INT_MAX;
    ll mx = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        ll a; cin>>a;
        mn = min(mn,a);
        mx = max(mx,a);
        mp[a]++;
    }

    cout<<mx - mn<<" ";

    if(mx==mn){
        cout<< n*(n-1) / 2 <<endl;
    }
    else 
    cout<< mp[mx] * mp[mn]<<endl;
    

    


    return 0;
}