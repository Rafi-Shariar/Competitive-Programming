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

//https://atcoder.jp/contests/abc337/tasks/abc337_a

int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n; cin >> n;
        
        int tak =- 0 , aok = 0;

        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;

            tak += a;
            aok += b;
        }


        if( tak > aok ) cout << "Takahashi" << endl;
        else if( tak == aok) cout << "Draw" << endl;
        else cout << "Aoki" << endl;
        
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  20-January-2024  18:01:05
*/ 
 