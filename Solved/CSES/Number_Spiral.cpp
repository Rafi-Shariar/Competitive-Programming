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


//https://cses.fi/problemset/task/1071/
int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        ll r , c; cin >> r >> c;

        ll ans = 0;

        if( r > c){

            if( r % 2 == 0) ans = (r*r) - c + 1;
            else{
                r--;
                 ans = (r*r) + c ;
            }
        }
        else
        {
            if( c % 2 == 1) ans = (c*c) - r + 1;
            else{
                c--;
                ans = (c*c) + r;
            }
            
        }

         cout << ans << endl;
        
    }
    

    return 0;
}

/*

*/