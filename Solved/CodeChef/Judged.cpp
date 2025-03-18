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


//https://www.codechef.com/START119C/problems/ADVITIYA2
int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        vector<int>v(5);
        forin(v,5);

        int c = 0;

        for(auto i : v){
            if( i == 1) c++;
        }

        if(c >= 4) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  31-January-2024  20:31:36
*/ 
 