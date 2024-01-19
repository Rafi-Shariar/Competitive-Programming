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


bool check(vector<int>&v, int range){

    int i=0, j=0;

    int mn = INT_MAX;
    int mx = INT_MIN;

    int cur = 0;

    while (j<v.size())
    {
        mn = min(mn,v[j]);
        mx = max(mx, v[j]);
        int dif = mx - mn;

        if( dif <= 1){
            j++;
            cur = max(cur,(j-i));
        }
        else
        {
            i++;
            mn = v[i];

            if( i > j){

                i = j;
                mn = v[i];
                mx = v[i];
            }
        }

        //cout << range<< " " << cur << endl;
        
    }

    //cout << range << "----" << cur << endl;

    return cur >= range;
    
}
int BS(vector<int>&v){

    int low = 0 , high = 1e9;;

    while (low <= high)
    {
        int mid = low + (high - low)/2;

        if(check(v,mid)) low = mid + 1;
        else high = mid - 1;
    }

    //cout << low << " " << high << endl;

    return low-1;
    

}
int main()
{
    fast

    int t=1;
    //cin>>t;

    while (t--)
    {
        int n; cin >> n;
        vector<int>v(n);
        forin(v,n);

        cout << BS(v) << endl;
        
    }
    

    return 0;
}