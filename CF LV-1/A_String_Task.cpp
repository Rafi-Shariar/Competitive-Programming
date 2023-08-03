#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    string s;
    cin>>s;

    string ans;

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='A' || s[i]=='O' || s[i]=='Y' || s[i]=='E' || s[i]=='U' || s[i]=='I') continue;
        else if(s[i]=='a' || s[i]=='o' || s[i]=='y' || s[i]=='e' || s[i]=='u' || s[i]=='i') continue;
        else
        {
            ans+='.';

            if(s[i]>='A' && s[i]<='Z') s[i] = s[i] + 32;

            ans+=s[i];
        }
        
    }

    cout<<ans<<endl;
    
    


    return 0;
}