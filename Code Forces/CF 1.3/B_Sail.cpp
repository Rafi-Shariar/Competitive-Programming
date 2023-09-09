#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int n,a,b,x,y;
    cin>>n>>a>>b>>x>>y;

    string s; cin>>s;
    int c=0;

    for (int i = 0; i < s.size(); i++)
    {
        int t1=a,t2=b;

        if(s[i]=='E' && a<x) a++; 
        if(s[i]=='S' && b>y) b--;
        if(s[i]=='W' && a>x) a--;
        if(s[i]=='N' && b<y) b++;

        if(a==x && b==y){
            cout<<i+1<<endl;
            return 0;
        }


    }

    cout<<-1<<endl;
    


    return 0;
}