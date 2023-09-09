#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    int mx = 1998638045;
    int mn = -1998638045;


    while (t--)
    {
        string s; int a; char c;
        cin>>s;
        cin>>a;
        cin>>c;

        if(c=='N'){

            if(s==">=") s = "<";
            else if(s=="<") s = ">=";
            else if(s=="<=") s = ">";
            else if(s==">") s = "<=";
        }

        if(s==">=") mn =  max(mn,a);
        else if(s==">") mn = max(mn,a+1);
        else if(s=="<=") mx = min(mx,a);
        else if(s=="<") mx = min(mx,a-1);
    }

    // cout<<mx<<" "<<mn<<endl;
    if(mn<=mx) cout<<mn<<endl;
    else cout<<"Impossible"<<endl;
    


    return 0;
}