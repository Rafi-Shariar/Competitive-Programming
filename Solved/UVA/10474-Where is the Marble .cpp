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

//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1415
int BS(vector<int>&v, int q){

    int low = 0 , high = v.size()-1;

    int ans = INT_MAX;

    while (low <= high)
    {
        int mid = low + (high - low)/2;

        if( q == v[mid] ) ans = min(ans, mid);

        if( q <= v[mid]) high = mid - 1;
        else
        {
            low = mid + 1;
        }
        
    }

    return ans;
    

}
int main()
{

    int n,q,tt=1;

    while (cin >> n >> q)
    {
        if( n == 0 && q == 0) break;

        printf("CASE# %d:\n",tt++);

        vector<int>v(n);
        forin(v,n);
        sort(v);

        while (q--)
        {
            int x; cin >> x;

            int ans = BS(v,x);

           if( ans == INT_MAX){
            cout << x << " not found" << endl;
           }
           else  cout << x << " found at " << ans+1 << endl;

            
        }
        
    }
    
    return 0;
}