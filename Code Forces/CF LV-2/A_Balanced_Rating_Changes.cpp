#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;
    int x = 1;
    while (t--)
    {
        int n; cin>>n;

        if(n%2==0) cout<<n/2<<endl;
        else
        {
            cout<<(n+x)/2<<endl;
            x *= -1;
        }
        
    }
    


    return 0;
}