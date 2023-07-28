#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        ll n; cin>>n;
        vector<pair<ll,ll>>v(n);

        for (int i = 0; i < n; i++)
        {
            ll a; cin>>a;
            v[i]={a,i+1};
        }

        sort(v.begin(),v.end());


        ll area=INT_MIN;

        ll idx=0;

        

        for (ll i = 0; i < n; i++)
        {
            ll val = v[i].first;

            ll tmp = val * (n-i);
            
            if(tmp>area){
                area = tmp;
                idx = i;
            }

        }

        // cout<<idx<<endl;

        for (int i = idx; i < n; i++)
        {
            cout<<v[i].second<<" ";
        }

        vector<ll>lex;

        for (int i = 0; i < idx; i++)
        {
            cout<<v[i].second<<" ";

           
        }
        cout<<endl;
        
  
        
    }
    


    return 0;
}