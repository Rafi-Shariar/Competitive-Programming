#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n; cin>>n;
    vector<int>v(n);
    int od=0,ev=0;

    for (int i = 0; i < n; i++)
    {
        cin>>v[i];

        if(v[i] & 1) od++;
        else ev++;
    }

    if(ev==n || od==n){

        for(auto i : v) cout<<i<<" ";
        cout<<endl;
    }
    else
    {
        sort(v.begin(), v.end());

        for(auto i : v) cout<<i<<" ";
        cout<<endl;
    }
    
    


    return 0;
}