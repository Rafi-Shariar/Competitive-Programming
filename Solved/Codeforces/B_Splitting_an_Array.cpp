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


//https://codeforces.com/edu/course/2/lesson/6/3/practice/contest/285083/problem/B
bool check(vector<ll>&v, ll mid, ll k ){

    ll sum = 0;
    int c = 1;

    for (int i = 0; i < v.size(); i++)
    {
        if( sum + v[i] <= mid){
            sum += v[i];
        }
        else
        {
           if( v[i] > mid) return false;
           sum = v[i];
           c++;
        }

        
    }

    return c <= k;
    
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

        vector<ll>v(n);
        forin(v,n);


        ll x = accumulate(v.begin(), v.end() , n);



        ll low = 0 , high = 1e14+9 , ans = 0;

        while (low <= high)
        {
            ll mid = low + (high -low)/2;

            if(check(v, mid, k)){
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }

        cout << ans << endl;


        
        
    }
    

    return 0;
}