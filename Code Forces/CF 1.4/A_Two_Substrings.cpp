#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    string s; cin>>s;

    int flag1 = 0;
    int flag2 = 0;
    int pos =0 ;


        for(int i=0; i<s.size()-1; i++)
        {
            if(s[i]=='A'&& s[i+1]=='B')
            {
                pos=i;
                flag2=1;
                break;
            }
        }
        if(flag2==1)
        {
            for(int i=pos+2; i<s.size()-1; i++)
            {
                if(s[i]=='B' && s[i+1]=='A')
                {
                    flag1=1;
                    break;
                }
            }
        }

        if(flag1==0)
        {
            for(int i=0; i<s.size()-1; i++)
            {
                if(s[i]=='B' && s[i+1]=='A')
                {
                    pos=i;
                    flag2=2;
                    break;
                }
            }
            if(flag2==2)
            {
                for(int i=pos+2; i<s.size()-1; i++)
                {
                    if(s[i]=='A' && s[i+1]=='B')
                    {
                        flag1=1;
                        break;
                    }
                }
            }
        }


        if(flag1==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    return 0;
}