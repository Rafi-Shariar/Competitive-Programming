#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll n,box;
    cin>>n>>box;

    vector<ll>v(n);
    ll sum = 0;
    ll mx = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        sum += v[i];
        mx = max(mx,v[i]);
    }

    if(box==1){
        cout<<sum<<endl;
        return 0;
    }

    if(n==2){
        cout<<max(v[0],v[1])<<endl;
        return 0;
    }

    if(n==box){
        cout<<mx<<endl;
        return 0;
    }

    ll ans = 0;

    for (ll i = 0; i < n-box; i++)
    {
        ans = max( ans, v[i] + v[2*(n-box) -1 -i] );
    }

    cout<<max(ans,mx)<<endl;
    




    
    


    return 0;
}