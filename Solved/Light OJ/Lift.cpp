#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    for (int i = 1; i <= t; i++)
    {
        int a,b;
        cin>>a>>b;

        int ans;
        
        if(b>=a) ans = 19 + (b*4);
        else{
             ans = 19 + ((a-b)*4) + (a*4);
        }

        printf("Case %d: %d\n",i,ans);
    }
    
    


    return 0;
}