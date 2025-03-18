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


//https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/A
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        ll n,k;
        cin >> n >> k;

        vector<ll>v(n);
        forin(v,n);

        int c = 0;

        ll i=0,j=0;
        ll sum = 0;
        ll ans = INT_MAX;

        while (i < n && j < n)
        {

             sum += v[j];
             j++;


            while( sum >=k && i < j){

               //cout << sum << " " << i << " " << j <<endl;
                ans = min(ans , j-i );
                sum -= v[i];
                i++;
            }
            

            
            
        }

        if( ans == INT_MAX ) cout << -1 << endl;
        else cout << ans << endl;
        
        
    }
    

    return 0;
}
/*
Author: Rafi Shariar
Created:  02-February-2024  16:25:33
*/ 
 