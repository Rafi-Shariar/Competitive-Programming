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


//https://atcoder.jp/contests/abc340/tasks/abc340_a
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int a,b,d;
        cin >> a >> b >> d;

        for (int i = a; i <= b; i+=d)
        {
            cout << i << " ";
        }

        cout << endl;
        
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  10-February-2024  18:00:50
*/ 
 