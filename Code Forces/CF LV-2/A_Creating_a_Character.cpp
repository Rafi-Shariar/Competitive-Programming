#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        ll a,b,x;
        cin>>a>>b>>x;

        if(b-a>=x) cout<<0<<endl;
        else
        {
            ll d = b-a;
            if( d >=0){
                x = x - d - 1;
                a = a + d + 1;
            }

               ll tmp =(a+x-b+ (a+x-b) % 2) / 2;

               cout<<min(tmp,x+1) <<endl;
        }
        
        
    }
    


    return 0;
}