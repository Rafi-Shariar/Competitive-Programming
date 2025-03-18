#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n; cin>>n;

    ll sum = 0;

    if(n>=1){

        for(ll i = 1; i<=n; i++) sum+=i;
    }
    else
    {
        for(ll i = 1; i>=n; i--) sum+=i;
    }

    cout<<sum<<endl;
    


    return 0;
}