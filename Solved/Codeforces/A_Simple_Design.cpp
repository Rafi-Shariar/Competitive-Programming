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


//https://codeforces.com/contest/1884/problem/A
int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        int n,k;
        cin>>n>>k;

        int ans = k , tmp;

        for (int i = n; ; i++)
        {
             tmp = i;

            ll sum = 0;

            while (tmp)
            {
                sum += (ll) tmp % 10;
                tmp/=10;
            }

            if( sum % k == 0){
                ans = i;
                break;
            }
            
        }

        cout<<ans<<endl;
        
        
    }
    

    return 0;
}