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


//https://lightoj.com/problem/setu
int main()
{
    //fast

    int t=1;
    cin>>t;

    for(int tt=1; tt<=t; tt++)
    {
        int n; cin>>n;

        ll sum = 0;

        printf("Case %d:\n",tt);

        while (n--)
        {
            string s; cin>>s;
            
            if( s[0] == 'd'){
                ll x; cin>>x;
                sum += x;
            }
            else
            {
                cout<< sum <<endl;
            }
            
            


        }
        
        
    }
    

    return 0;
}