#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n; cin>>n;
    int sum = 0;
    int a=0, b=0;

    for (int i = 0; i < n; i++)
    {
        int x; cin>>x;
        
        if(x==100) a++;
        else b++;

        sum+=x;
    }

    ll h2 = b%2;
    ll h1 = a - (h2*2);

    if(h1 >=0 && h1%2==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    


    return 0;
}