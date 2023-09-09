#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n; cin>>n;
    vector<ll>v(n);

    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end());

    ll sum = 0;
    ll c=0;

    for (int i = 0; i < n; i++)
    {
        if(sum<=v[i]){
            c++;
            sum += v[i];
        }
    }

    cout<<c<<endl;
    
    


    return 0;
}