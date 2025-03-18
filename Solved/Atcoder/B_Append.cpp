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


//https://atcoder.jp/contests/abc340/tasks/abc340_b
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int q; cin >> q;
        deque<int>dq;

        while (q--)
        {
            int a,b;
            cin >> a >> b;

            if( a == 1){
                dq.push_front(b);
            }
            else
            {
                cout << dq[b-1] << endl;
            }
            
        }
        
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  10-February-2024  18:03:55
*/ 
 