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


bool pos(int a, int b, int mid){

    int add = (100 * mid);

    int now = a + add;

    return now>b;
}
int main()
{
    fast

    int t=1;
    cin>>t;

    while (t--)
    {
        int n; cin >> n;

        int a = 0 , b = 0;

        for (int i = 0; i < n; i++)
        {
            int x; cin >> x;
            a += x;
        }

        for (int i = 0; i < n; i++)
        {
            int x; cin >> x;
            b += x;
        }

        int ans = 0;

        int low = 0 , high = 100;

        while (low <= high)
        {
            int mid = low + (high - low)/2;

            if( pos(a,b,mid)){
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }

        cout << ans << endl;
        

        
        
    }
    

    return 0;
}