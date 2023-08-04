#include<bits/stdc++.h>
using namespace std;

bool checkpal( string s){
    
    
    
    int i=0, j=s.size()-1;
    
    if(j==0) return true;
    
    while(i<j){
        
        if( s[i] != s[j]) return false;
         i++;
        j--;
    }
    
    return true;
}
int main(){
    
    int t; cin>>t;
    
    for(int i=1; i<=t; i++){
        
        string s; cin>>s;
        
        printf("Case %d: ",i);
        
        if( checkpal(s)) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}