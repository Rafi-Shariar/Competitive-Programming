#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n; cin>>n;
    int total=0;

    for (int i = 0; i < n; i++)
    {
        int a; cin>>a;
        total += a;
    }

    int ans = 0;

    for (int i =1; i <= 5; i++)
    {
        if( (total+i) % (n+1) != 1) ans++;
    }

    cout<<ans<<endl;
    
    
    


    return 0;
}