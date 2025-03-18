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


//https://www.codechef.com/problems/NONNEGPROD
int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        int n; cin >> n;

        bool zero = false;
        int neg = 0;

        for (int i = 0; i < n; i++)
        {
            int a; cin >> a;
            if( a == 0) zero = true;
            if( a < 0 ) neg++;
        }

        if( zero || neg % 2==0) cout << 0 << endl;
        else cout << 1 << endl;
        
    }
    

    return 0;
}