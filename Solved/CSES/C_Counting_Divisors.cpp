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

//https://cses.fi/problemset/task/1713
int find_div(int n){
    vector<int>v;

    for (int i = 1; i*i <= n; i++)
    {
       if( n%i == 0){
        v.push_back(i);

        if( n/i != i){
            v.push_back(n/i);
        }
       }
    }

    return v.size();
    
}
int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        int n; cin >> n;

        cout << find_div( n ) << endl;
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  07-February-2024  12:51:14
*/ 
 