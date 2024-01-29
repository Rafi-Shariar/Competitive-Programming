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

//https://lightoj.com/problem/points-in-segments
int main()
{
    //fast

    int t=1,tt=1;
    cin>>t;

    while (t--)
    {
        int n,q;
        cin >> n >> q;
        vector<int>v(n);
        forin(v,n);
        sort(v);

        printf("Case %d:\n",tt++);

        while (q--)
        {
            int l,r;
            cin >> l >> r;

            int it = upper_bound(v.begin() , v.end() , r) - lower_bound(v.begin() , v.end() , l);

            cout << it << endl;

            
        }
        

    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  21-January-2024  22:31:56
*/ 
 