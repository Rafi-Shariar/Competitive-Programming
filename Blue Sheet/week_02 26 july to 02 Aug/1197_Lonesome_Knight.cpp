#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        char c; int n;
        cin>>c>>n;

        int cn=0;

        if( c-1>='a' && n-2>=1) cn++;
        if( c-2>='a' && n-1>=1) cn++;
        if( c-2>='a' && n+1<=8) cn++;
        if( c-1>='a' && n+2<=8) cn++;

        if( c+1<='h' && n-2>=1) cn++;
        if( c+2<='h' && n-1>=1) cn++;
        if( c+2<='h' && n+1<=8) cn++;
        if( c+1<='h' && n+2<=8) cn++;

        cout<<cn<<endl;
       
    }
    


    return 0;
}