#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll a,b,c;
    cin>>a>>b>>c;

    ll tmp = b-a % b;
    ll mx = c - a;

    if(tmp<=mx){

        while (tmp<=mx)
        {
            cout<<tmp<<" ";
            tmp+=b;
        }
        cout<<endl;
        
    }
    else cout<<-1<<endl;
    

 


    return 0;
}
