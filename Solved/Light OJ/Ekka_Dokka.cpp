#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    for (int i = 1; i <= t; i++)
    {
        ll n; cin>>n;

        if(n&1) printf("Case %d: Impossible\n",i);
        else
        {
            ll a,b;
            a = n/2;
            b = 2;

            while ( a%2==0)
            {
                a/=2;
                // b+=2;
                b*=2;
            }

            printf("Case %d: %lld %lld\n",i,a,b);
            
        }
        
    }
    
    


    return 0;
}