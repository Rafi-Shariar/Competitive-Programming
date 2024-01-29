#include<bits/stdc++.h>
using namespace std;
 int main(){

    int t;
    cin>>t;

    vector<int>host;
    vector<int>guest;

    for (int i = 1; i <= t; i++)
    {
        int h,g;
        cin>>h>>g;

        host.push_back(h);
        guest.push_back(g);
    }

    int times=0;

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            if(host[i] == guest[j]) times++;
        }
        
    }

    cout<<times<<endl;
    
    





    return 0;
 }