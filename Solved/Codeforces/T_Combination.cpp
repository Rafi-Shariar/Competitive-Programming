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

//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/T
int ncr(int n , int r){

    if( n < 0 || r < 0 || n < r) return 0;

    if( n == 0) return 1;

    return ncr(n-1,r) + ncr(n-1,r-1);
}
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n,r;
        cin >> n >> r;

        cout << ncr(n,r) << endl;
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  15-February-2024  23:41:31
*/ 
 