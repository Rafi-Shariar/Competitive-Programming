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

//https://codeforces.com/problemset/problem/817/C
int check( ll mid){

    int c = 0;

    while(mid){

        c += ( mid % 10);
        mid /= 10;
    }

    return c;

}
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {

        ll n,m;  cin >> n >> m;

        ll low = 1, high = n;

        ll ans = 0;

        while( low <= high){

            ll mid = low + (high - low)/2;

            ll x = check(mid);

            if( mid - x >= m){
                ans = n - mid + 1;
                high = mid - 1;
            }
            else low = mid + 1;

        }

        cout << ans << endl;


        
    }
    

    return 0;
}