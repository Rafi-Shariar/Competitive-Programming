#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;
    cin.ignore();

    for (int i = 1; i <= t; i++)
    {
        printf("Case %d:\n",i);

        stack<string>forward,back;
        forward.push("http://www.lightoj.com/");

        string s,url,ans,tmp;

        while (getline(cin,s))
        {
            if(s[0]=='Q') break;

            if(s[0]=='V'){
                url = s.substr(6);

                if(forward.empty()) ans = "Ignored";
                else
                {
                    tmp = forward.top();
                    forward.pop();
                    back.push(tmp);

                    while(!forward.empty()) forward.pop();

                    forward.push(url);
                    ans = url;
                }
                

            }

            if(s[0]=='B'){

                if(back.empty()) ans = "Ignored";
                else
                {
                    forward.push( back.top());
                    back.pop();

                    ans = forward.top();
                  
                }
                
            }

            if(s[0]=='F'){

                if(forward.size()<2) ans = "Ignored";
                else
                {
                    back.push(forward.top());
                    forward.pop();
                    ans = forward.top();
                }
                
            }

            cout<<ans<<endl;

        }
        
    }
    
    


    return 0;
}