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


//https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/M

void fun( vector<int>&v, int &i, int k, int n,  ll &ans){

    if( i == k || n < 0) return;

    ans += v[n];
    i++;

    fun(v, i, k , n-1, ans);

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
        vector<int>v(n);
        forin(v,n);

        ll ans = 0;
        int idx = 0;
        fun( v, idx , k , n-1, ans );

        cout << ans << endl;
        
    }
    

    return 0;
}