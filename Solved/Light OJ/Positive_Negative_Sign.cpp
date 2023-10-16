#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    for (int i = 1; i <= t; i++)
    {
        ll a,b;
        cin>>a>>b;
        
        a = a/2;
        ll sum = a*b;
        


        printf("Case %d: %lld\n",i,sum);
        

    }
    
    


    return 0;
}