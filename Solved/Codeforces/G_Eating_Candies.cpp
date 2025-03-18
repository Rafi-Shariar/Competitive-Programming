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


//https://vjudge.net/contest/603526#problem/G
int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        int n; cin >> n;
        vector<int>v(n);
        
        int sum1 = 0;
        map<int,int>fr,bk;
        int c1 = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum1 += v[i];
            c1++;

            fr[sum1] = c1;
        }

        int sum2 = 0;
        int c2 = 0;

        for (int i = n-1; i >= 0; i--)
        {
            sum2 += v[i];
            c2++;

            bk[sum2] = c2;
        }

        int ans = 0;

        for( auto i : fr){

            int now = i.first;

            if( bk.find(now) != bk.end()){

                int a = i.second;
                int b = bk[now];

                if( a + b <= n) ans = max(ans , (a+b));
            }
        }

        cout << ans << endl;
        
        
    }
    

    return 0;
}