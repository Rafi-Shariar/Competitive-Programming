#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;
    int i=1;

    while (t--)
    {

        int n,k;
        cin>>n>>k;

        string per = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

        string s = per.substr(0,n);
        string tmp = s;

        cout<<"Case "<<i++<<":"<<endl;

        while (k--)
        {
            cout<<s<<endl;
            next_permutation(s.begin(),s.end());

            if(s==tmp) break;

        }
        
    }
    


    return 0;
}