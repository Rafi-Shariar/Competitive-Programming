#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    string s; cin>>s;

    int cap = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]>='A' && s[i]<='Z') cap++;
    }

    bool small = false;
    if(s[0]>='a' && s[0]<='z') small = true;

    if((cap==s.size()-1) && small){

        for (int i = 0; i < s.size(); i++)
        {
            if(i==0){
                if(s[i]>='a' && s[i]<='z') s[i] = s[i] - 32;
            }else
            {
                if(s[i]>='A' && s[i]<='Z') s[i] = s[i] + 32;
            }
 
        }

        cout<<endl; 

    }
    else if(cap==s.size()){

        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]>='A' && s[i]<='Z') s[i] = s[i] + 32;
        }
        
    }

        cout<<s<<endl;

    return 0;
}