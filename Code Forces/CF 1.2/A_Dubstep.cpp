#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    string s;
    cin>>s;

    string ans;

    int i=0;

    while (i<s.size())
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){

                      
            if(ans.empty()) i+=3;
            else if( ans.back()==' ') i+=3; 
            else {ans += ' ';
            i+=3;
            }
        }else
        {
            ans+=s[i];
            i++;
        }
        
    }


    cout<<ans<<endl;
    
    



    return 0;
}