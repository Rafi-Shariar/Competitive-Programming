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


const ll mod = 1e9 + 7;
int main()
{
    fast

    int t=1;
    //cin>>t;

    ll sum = 0;

    while (t--)
    {
        int n; cin >> n;
        vector<int>v(n);
        forin(v,n);

        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                sum += ( (( v[i] % mod)*(v[j] % mod) ) % mod );
            }
            
        }


        cout << sum << endl;
        


        
    }
    

    return 0;
}