#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    ll ans = 0;

    while (t--)
    {

        int a,b,c,d;
        cin>>a>>b>>c>>d;

        ans += (c-a+1) * (d-b+1);

    }
    cout<<ans<<endl;
    


    return 0;
}