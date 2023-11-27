#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//https://vjudge.net/problem/AtCoder-abc156_b/origin
int main(){

    ll n,k;
    cin>>n>>k;

    vector<int>v;

    while (n>=k)
    {
        int tmp = n%k;
        v.push_back(tmp);
        n/=k;
    }

    // for(auto i : v) cout<<i<<" ";
    // cout<<endl;

    cout<<v.size()+1<<endl;


    


    return 0;
}