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
bool check(int n, ll mid ,int k){

    ll now = mid;
    ll div = 1;

    while (true)
    {
        div = (div * k);
        int add = mid / div;

        if( add == 0) break;
        now += add;
    }

    debug(mid, now , n );

    if( now >= n) return true;
    else return false;


}
ll BS(int n, int k){

    ll low = 0 , high = n;

    while (low <= high)
    {
        ll mid = low + (high - low )/2;

        if( check(n,mid, k)) high = mid - 1;
        else low = mid + 1;
    }

    return low;
 
}
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n,k;
        cin >> n >> k;

        cout << BS(n,k) << endl;



        
    }
    

    return 0;
}