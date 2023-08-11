#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

    int a,b;
    cin>>a>>b;
    vector<int>v;

    for (int i = 0; i < a; i++)
    {
        int x; cin>>x;
        if(x<0) v.push_back(x);
    }

    sort(v.begin(),v.end());

    int sum=0;

    for (int i = 0; i < b && i<v.size(); i++)
    {
        sum += ( v[i]* -1);
    }

    cout<<sum<<endl;
    
    
    


    return 0;
}