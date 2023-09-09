#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n,m;
    cin>>n>>m;

    int v = INT_MAX, p = INT_MIN, c=INT_MAX;

    for (int i = 0; i < n; i++)
    {
        int a; cin>>a;

        v = min(v,a);
        p = max(p,a);
    }

    for (int i = 0; i < m; i++)
    {
        int a; cin>>a;
        c = min(c,a);
    }

    int mx = max(2*v,p);

    if(mx<c) cout<<mx<<endl;
    else cout<<-1<<endl;


    
    


    return 0;
}