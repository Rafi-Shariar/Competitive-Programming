#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    string s; cin>>s;

    bool h = false, e=false,l1=false,l2=false,o=false;

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='h' && !h && !e && !l1 && !l2 && !o) h=true;

        if(s[i]=='e' && h && !e && !l1 && !l2 && !o) e = true;

        if(s[i]=='l' && h && e && !l1 && !l2 && !o) l1 = true;
        else if(s[i]=='l' && h && e && l1 && !l2 && !o) l2 = true;

        if(s[i]=='o' && h && e && l1 && l2 && !o) o = true;

    }

    if(h && e && l1 && l2 && o) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    


    return 0;
}