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

//https://codeforces.com/edu/course/2/lesson/6/3/practice/contest/285083/problem/C
const int N = 1e5;
bool pos(int x , vector<int>&v, int k){

    int c = 1;
    int last_cow = v[0];

    for (int i = 1; i < v.size(); i++)
    {
        if( v[i] -last_cow   >= x){
            c++;
            last_cow = v[i];
        }
    }

    return c >= k;
    
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

        int low = 0, high = 1e9+7, ans = 0;
        
        while (low <= high)
        {
            int mid = low + (high - low )/2;

            if( pos(mid , v, k) ){
                ans = mid;
                low = mid + 1;
            }
            else high = mid - 1;
        }

        cout << ans << endl;
        


        
    }
    

    return 0;
}