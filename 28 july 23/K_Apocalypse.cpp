#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int dp(vector<int>v,int i){

       int ans;
       int sum = 0;
  if(i==0) return ans;

    sum+=max(dp(v,i+1), dp(v,i-1));

    ans = max(ans,sum);

    return ans;
}
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        vector<int>v(n);

        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        int ans = dp(v,n-1);

        cout<<ans<<endl;

        
    }
    


    return 0;
}