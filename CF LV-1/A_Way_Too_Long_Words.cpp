#include<bits/stdc++.h>
using namespace std;
int main(){
 
    int n; cin>>n;
 
    string s;
 
    for (int i = 1; i <= n; i++)
    {
        cin>>s;
 
        if (s.size()>10)
        {
            int num =s.size()-2;
 
            printf("%c%d%c\n",s[0],num,s[s.size()-1]);
 
        }
        else
        {
            cout<<s<<endl;
        }
        
        
        
    }
    
 
 
    return 0;
}