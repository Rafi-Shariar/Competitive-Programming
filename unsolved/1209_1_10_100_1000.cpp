#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        ll n; cin>>n;

        ll j = 0;
        bool found = false;

        for (ll i = 1; i <=n; i+=j)
        {
            if(i==n) found = true;
            j++;
        }
      

        if(found) cout<<"1 ";
        else cout<<"0 ";

        
    }
    


    return 0;
}