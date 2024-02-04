#include <bits/stdc++.h>
using namespace std;
#define ll         long long int
#define sort(x)    sort(x.begin(),x.end())
#define forin(x,n)  for(int i=0; i<n; i++) cin>>x[i];
#define endl       "\n"
#define fast       ios_base::sync_with_stdio(0); cin.tie(0) ; cout.tie(0);
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif



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