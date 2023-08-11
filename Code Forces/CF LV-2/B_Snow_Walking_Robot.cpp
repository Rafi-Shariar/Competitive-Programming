#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;

    while (t--)
    {
        string s; cin>>s;
        int u=0, d = 0, l=0 , r = 0;

        for (int i = 0; i < s.size(); i++)
        {
            char c = s[i];

            if(c=='U') u++;
            if(c=='D') d++;
            if(c=='L') l++;
            if(c=='R') r++;
        }

        int ud=0,lr=0;

        int zeros = 0;
        if(u==0) zeros++;
        if(d==0) zeros++;
        if(r==0) zeros++;
        if(l==0) zeros++;

        if(zeros>2){
            cout<<0<<endl;
            continue;
        }

        if(u>0 && d>0 && l>0 && r>0){

            ud = min(u,d);
            lr = min(l,r);
        }
        else if( u==0 || d==0){
            lr = 1;
        }
        else if( l==0 || r==0){
            ud = 1;
        }

        if(u==0 || d==0) ud = 0;
        if(l==0 || r==0) lr = 0;

        string ans;

        for(int i=0; i<ud; i++) ans += 'D';        
        for(int i=0; i<lr; i++) ans += 'R';        
        for(int i=0; i<ud; i++) ans += 'U';        
        for(int i=0; i<lr; i++) ans += 'L';   

        cout<<ans.size()<<endl;
        for(auto i : ans) cout<<i;
        cout<<endl;     
    }
    


    return 0;
}