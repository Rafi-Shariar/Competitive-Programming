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

//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=898

int main()
{
    fast

    int t=1;
    //cin>>t;
     int y; 

    while (cin >> y)
    {
       
        int n; cin >> n;
        vector<int>v(n);
        forin(v,n);

        int mx = 0 , a=0 , b=0;

        for (int i = 0; i < n; i++)
        {
            int x = v[i];

            int l = lower_bound(v.begin() , v.end() , x) - v.begin();
            int r = upper_bound(v.begin() , v.end() , (x+y-1 )) - v.begin();

            int now = r - l;

            if( now > mx){
                mx = now;
                a = v[l];
                b = v[r-1];
            }
        }

        cout << mx << " " << a << " " << b << endl;


        
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  01-February-2024  22:32:49
*/ 
 