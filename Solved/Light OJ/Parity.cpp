#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    for (int i = 1; i <= t; i++)
    {
        ll n; cin>>n;

        int c=0;
        printf("Case %d: ",i);

        for (int j = 0; j <= 31; j++)
        {
            if( n & (1<<j)) c++;
        }

        if(c&1) cout<<"odd"<<endl;
        else cout<<"even"<<endl;
        
    }
    
    


    return 0;
}