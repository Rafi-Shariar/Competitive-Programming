#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    for (int i = 1; i <= t; i++)
    {
        ll n,m; cin>>n>>m;
        ll cell = n*m;

        ll ans;

        if(n==1 || m==1) ans = max(n,m);
        else if(n==2 || m==2){

            int x = max(n,m);
            ans = x;
            
            if(x%4==1 || x%4==3) ans++;
            if(x%4==2) ans += 2;

        }
        else if( cell%2==1) ans = (cell/2) + 1;
        else ans = cell/2;

        cout<<"Case "<<i<<":"<<" "<<ans<<endl;
    }
    
    


    return 0;
}