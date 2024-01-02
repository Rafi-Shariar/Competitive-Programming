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

//https://codeforces.com/problemset/problem/1370/A

int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        int n; cin >> n;

        int ans = 1;

        // for (int i = 1; i <= n; i++)
        // {
        //     for (int j = i+1; j <= n; j++)
        //     {
        //         ans = max(ans , __gcd(i,j));

        //         cout << i << " " << j << " " << __gcd(i,j) << endl;
        //     }
            
        // }

        cout << n/2 << endl;
        
    }
    

    return 0;
}