#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    ll a; cin>>a;
    ll b,c;

    if(a%2==0){

         b = (a/2) * (a/2) - 1;
         c = b+2;
    }
    else{

         b = ((a*a)-1)/2;
         c = b+1;

        //  cout<<b<<" "<<c<<endl;
    }

    if(b==0 || c==0){
        cout<<-1<<endl;
        return 0;
    }

    if( a*a == b*b + c*c) cout<<b<<" "<<c<<endl;
    else if( b*b == a*a + c*c) cout<<b<<" "<<c<<endl;
    else if( c*c == a*a + b*b) cout<<b<<" "<<c<<endl;
    else cout<<-1<<endl;
    


    return 0;
}