#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n; cin>>n;
    vector<int>v;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
       int a; cin>>a;
       v.push_back(a);
       sum += a;

    }

    if(sum%2==0) cout<<sum<<endl;
    else
    {
        sort(v.begin(),v.end());

        int i=0;
        int val;

        while (i<n)
        {
            val = v[i];

            if(val%2!=0) break;
            else
            {
                i++;
            }
            
        }

        cout<<sum-val<<endl;
        
    }
    




    

    return 0;
}