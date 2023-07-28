#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n; cin>>n;
    
    string s; cin>>s;

    int c=0;

    for (int i = 0; i < s.size()-1; i++)
    {
        if(s[i]=='0'){
            c++;
            s[i]='1';
            s[i+1] = '1';
        }
    }

    if(s[s.size()-1]=='0') c++;

    cout<<c<<endl;
    


    return 0;
}