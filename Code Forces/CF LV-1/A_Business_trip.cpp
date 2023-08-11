#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int t; cin>>t;
    int n=12;
    vector<int>v;

    while (n--)
    {
        int a; cin>>a;
        v.push_back(a);
        
    }

    if(t==0) cout<<0<<endl;
    else {

    sort(v.rbegin(),v.rend());
    int sum=0;

    for (int i = 0; i < 12; i++)
    {
        sum += v[i];

        if(sum>=t){
            cout<<i+1<<endl;
            return 0;
        }
    }
     cout<<-1<<endl;
    }
    

    


    return 0;
}