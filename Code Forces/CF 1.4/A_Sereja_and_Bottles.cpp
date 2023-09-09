#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n; cin>>n;
    int fre[1001]={0};
    vector<pair<int,int>>v(n);

    for (int i = 0; i < n; i++)
    {
        cin>>v[i].first>>v[i].second;
        fre[v[i].second]++;
    }

    int c = 0;

    for (int i = 0; i < n; i++)
    {
        int b = v[i].first;
        int cn = v[i].second;

        fre[cn]--;

        if(fre[b]==0) c++;

        fre[cn]++;

    }

    cout<<c<<endl;
    
    

    return 0;
}