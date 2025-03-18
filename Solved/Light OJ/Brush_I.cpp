#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    for (int j=1; j<=t; j++)
    {
        int n; cin>>n;

        ll sum=0;

        for (int i = 0; i < n; i++)
        {
            ll a; cin>>a;
            if(a>0) sum += a;
        }

        cout<<"Case "<<j<<": "<<sum<<endl;

        
    }
    


    return 0;
}