#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int n,m;
string s;
int fun(char c){

    int i=0,j=0;
    int cn=0;
    int ans=0;

    while (i<n)
    {
        if(s[i]==c) cn++;

        if(cn>m){

            while (cn>m)
            {
               if(s[j]==c) cn--;
               j++;
            }
            
        }

        ans = max(ans , i-j+1);
        i++;
    }

    return ans;
    

}
int main(){

    cin>>n>>m;
    cin>>s;

    cout<<max(fun('a'),fun('b'))<<endl;


    return 0;
}