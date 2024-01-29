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


//https://codeforces.com/problemset/problem/1180/A
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n; cin >> n;

        int box = 1;
        int i = 0;

        while (i<n)
        {
            box += (i*4);
            i++;
        }

        cout << box << endl;
        
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  28-January-2024  21:03:00
*/ 
 