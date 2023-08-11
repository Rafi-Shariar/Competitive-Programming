#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll n,k;
    cin>>n>>k;
    vector<int>v(k);
    for(int i=0; i<k; i++) cin>>v[i];

    ll ans = 0;
    ll cur=1;

    for (int i = 0; i < k; i++)
    {
        int h = v[i];

        if(h>=cur){
            ans += (h-cur);
            cur = h;
        }
        else
        {
            ans += (n-cur) + h;
            cur = h;
        }
        
    }

    cout<<ans<<endl;
    
    

    




    return 0;
}