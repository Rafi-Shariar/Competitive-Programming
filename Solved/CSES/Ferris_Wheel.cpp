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


//https://cses.fi/problemset/task/1090/
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n,k;
        cin >> n >> k;
        vector<int>v(n);
        forin(v,n);
        sort(v);

        int l=0 , r = n-1;
        int c = 0;

        while (l<=r)
        {
            if( v[l] + v[r] <= k){
                l++;
                r--;
                c++;
            }
            else
            {
                c++;
                r--;

            }
            


        }

        cout << c << endl;
        
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  30-January-2024  12:32:07
*/ 
 