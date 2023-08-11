#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n; cin>>n;
    vector<int>v;

    for (int i = 0; i < n; i++)
    {
        int a; cin>>a;
        v.push_back(a);
    }

    sort(v.begin(),v.end());

    int p = 1;

    for (int i = 0; i < n; i++)
    {
        if( v[i]>=p) p++;
    }

    cout<<p-1<<endl;
    
    
    


    return 0;
}