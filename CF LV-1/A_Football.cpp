#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    string s; cin>>s;

    string tmp="1111111";
    string tmp2="0000000";

    bool ok = false;

    if( s.find(tmp) != string::npos) ok = true;
    if( s.find(tmp2) != string::npos) ok = true;

    if(ok) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;




    return 0;
}