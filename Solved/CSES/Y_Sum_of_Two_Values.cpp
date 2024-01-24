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

//https://vjudge.net/contest/577004#problem/Y

int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
         int n,k;
    cin>>n>>k;
 
    int arr[n+1];
    map<int,int>mp;
 
    for (int i = 1; i <= n; i++)
    {
        cin>>arr[i];        
    }
 
    int id1,id2;
    bool pos = false;
 
    for (int i = 1; i <= n; i++)
    {
        int value = arr[i];
        int res = k-value;
 
        if( mp.find(res)!= mp.end()){
 
            id2=i;
            id1 = mp.at(res);
 
            if( arr[id1] + arr[id2] == k){
            pos = true;
            break;
            }
        }
        mp[arr[i]] = i;
 
    }
 
    if(pos)cout<<id1<<" "<<id2<<endl;
    else cout<<"IMPOSSIBLE"<<endl;

    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  24-January-2024  19:25:06
*/ 
 