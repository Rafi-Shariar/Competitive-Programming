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



int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        int n,m;
        cin >> n >> m;

        if( n % m == 0) cout << 0 << endl;
        else
        {
          if( m > n) cout << m - n << endl;
          else
          {
            
            cout << m - n % m << endl;

           // cout << m - n << endl;
            
          }
          
            

        }
        
    }
    

    return 0;
}