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

//https://acm.timus.ru/problem.aspx?space=1&num=1005
void fun( int i, int n, vector<ll>&v, ll pre, ll cur, ll &ans){

    if( i == n) return;

    // pick
    ans = min(ans, abs(pre - cur));
    fun( i+1, n, v, pre-v[i], cur + v[i], ans);

    // not pick
    fun(i+1, n, v, pre, cur, ans);
}
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n; cin >> n;
        vector<ll>v(n);
        forin(v,n);

        ll pre = 0,cur = 0, ans = INT_MAX;
        for(int i=0; i<n; i++) pre += (ll)v[i];

       fun(0,n,v,pre,cur, ans);

       cout << ans <<endl;
        
    }
    

    return 0;
}