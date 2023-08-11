#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;
    map<ll,ll>mp;
    ll i = 0;



    while (t--)
    {
        ll a,b;
        cin>>a>>b;

        if(a<=i){

            while (a<=i)
            {
                a+=b;
            }
        }

        

        while (true)
        {

            if(mp.find(a) == mp.end()){
                break;
            }
            a =+ b;
        }

        i = a;
   
    }

    cout<<i<<endl;

    


    return 0;
}