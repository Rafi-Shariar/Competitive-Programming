#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n,k;
    cin>>n>>k;

    vector<int>v(n+1);

    for (int i = 1; i <= n; i++) cin>>v[i];

    int val = v[k];

    int c=0;

    for(int i=1; i<=n; i++){

        if(v[i]>=val && v[i]>0)c++;
    }

    cout<<c<<endl;
    
    
    


    return 0;
}