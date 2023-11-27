#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

    ll x,y;
    cin>>x>>y;

    int mul = 2;

    ll c=0;

    while (x<=y)
    {
        c++;
        x = x*2;
    }

    cout<<c<<endl;
    

    


    return 0;
}