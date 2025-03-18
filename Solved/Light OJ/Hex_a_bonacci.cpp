#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int mod = 10000007;
int main(){

    int t; cin>>t;

    for (int j=1; j<=t; j++)
    {
        ll arr[10010];
        printf("Case %d: ",j);
        
        
        for (int i = 0; i < 6; i++)
        {
            cin>>arr[i];
        }

        int n; cin>>n;

        for (int i = 6; i <=n; i++)
        {
            arr[i] = (arr[i-1]+arr[i-2]+arr[i-3]+arr[i-4]+arr[i-5]+arr[i-6] ) % mod;

        }

        // cout<<arr[n]<<endl;
        cout<<arr[n]%mod<<endl;



        
        

        
    }
    


    return 0;
}