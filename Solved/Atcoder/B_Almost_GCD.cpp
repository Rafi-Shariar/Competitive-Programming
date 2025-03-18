#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n;
    cin>>n;

    vector<int>v;
    
    for (int i = 0; i < n; i++)
    {
        int a; cin>>a;
        v.push_back(a);
    }

    int mx = *max_element(v.begin(),v.end());

    int maxx = 0;
    int ans = 0;


    for (int i = 2; i <= mx; i++)
    {
        int c = 0;

        for (int j = 0; j < n; j++)
        {
            if(v[j] % i==0) c++;
        }

        if(c>maxx){
            maxx=c;
            ans=i;
        }

        
    }

    cout<<ans<<endl;
    



    


    


    return 0;
}