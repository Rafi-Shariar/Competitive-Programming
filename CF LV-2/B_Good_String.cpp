#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        string s; cin>>s;

        int sz = s.size() - 1;
        int ans = sz;

        for (int i = 0; i < n; i++)
        {
            if(s[i]=='>' || s[sz- i] == '<') ans = min(ans,i);
        }
        
        cout<<ans<<endl;
    }
    


    return 0;
}