#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

 string s; cin>>s;
 int c=0;

 for(int i=0; i<s.size(); i++){

    if(s[i]>='A' && s[i]<='Z') c++;
 }

 if(c==s.size()){
    cout<<s<<endl;
 }else
 {
    for (int i = 0; i < s.size(); i++)
    {
        if(i==0){
            if( s[i]>='a' && s[i]<='z') s[i] = s[i] - 32; 
        }else
        {
            if(s[i]>='A' && s[i]<='Z') s[i] = s[i] + 32;
        }

        cout<<s[i];
        
    }

    cout<<endl;
    
 }
 


    return 0;
}