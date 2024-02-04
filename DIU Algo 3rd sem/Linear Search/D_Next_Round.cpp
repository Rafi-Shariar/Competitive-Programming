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


//https://vjudge.net/contest/575132#problem/D
int main(){
 
    int n,k;
    cin >> n >> k;
 
    vector<int>v(n+1);
 
    for (int i = 1; i <= n; i++) cin>>v[i];
 
    int val = v[k];
 
    int c=0;
 
    for(int i=1; i<=n; i++){
 
        if(v[i]>=val && v[i]>0)c++;
    }
 
    cout<<c<<endl;
    
    
    return 0;
}
/*
Author: Rafi Shariar
Created:  29-January-2024  18:49:35
*/ 
 