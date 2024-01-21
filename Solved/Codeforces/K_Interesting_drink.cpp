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

//https://codeforces.com/problemset/problem/706/B
bool pos(int x , vector<int>&v, int a){

    return v[x] <= a;
}
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n; cin >> n;
        vector<int>v(n);
        forin(v,n);
        sort(v);

        int q; cin >> q;

        while (q--)
        {
            int a; cin >> a;

            int low = 0 , high = n-1 , ans = -1;

            while (low <= high)
            {
                int mid = low + (high-low)/2;

                if( pos(mid,v, a)){
                    ans = mid;
                    low = mid + 1;
                }
                else high = mid - 1;
            }


            if( ans == -1) cout << 0 << endl;
            else cout << ans + 1 << endl;
             
        }
        
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  21-January-2024  23:33:42
*/ 
 