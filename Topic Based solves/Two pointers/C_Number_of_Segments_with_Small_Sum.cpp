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

//https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/C

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

        ll segs = 0 , sum = 0;
        int j = 0;

        for (int i = 0; i < n; i++)
        {
            while ( j < n && sum + v[j] <= k )
            {
                sum += v[j];
                j++;
            }

            segs += (j-i);
            sum -= v[i];

            
        }
        

        cout << segs << endl;
        
        
    }
    

    return 0;
}
