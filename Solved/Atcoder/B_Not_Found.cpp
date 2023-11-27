#include<bits/stdc++.h>
using namespace std;
#define ll long long int
//https://vjudge.net/problem/AtCoder-abc071_b/origin
int main(){

    string s;
    cin>>s;

    int frq[26] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        int ch = s[i];
        frq[ ch - 'a']++;
    }

    bool ok = false;

    for (int i = 0; i < 26; i++)
    {
        if( frq[i]==0){
            char ch = i+97;
            cout<<ch<<endl;
            ok = true;
            break;
        }
    }

    if(!ok) cout<<"None"<<endl;
    
    


    return 0;
}